
#include <stdio.h>
#include <mpi.h>

const int MAX_STRING = 100;

int main(){
  int my_rank, comm_sz;
  char toothpick[MAX_STRING];

  MPI_Init(NULL, NULL);
  MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);
  MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

  if(my_rank !=0){
    sprintf(toothpick, "Proc %d of %d > Does anyone have a toothpick?\n", my rank, comm_sz);
    MPI_Send(toothpick, strlen(toothpick)+1, MPI_CHAR, 0, 0, MPI_COMM_WORLD);
  }else{
    printf("Proc %d of %d > Does anyone have a toothpick?\n", my rank, comm_sz);
    for(int q = 1; q < comm_sz; q++){
      MPI_Recv(toothpick, MAX_STRING, MPI_CHAR, q, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      printf("%s\n", toothpick);
    }
  }


  MPI_Finalize();
  return 0;
}
