#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



void Print_two_d(int two_d[][4], int rows, int cols);
int main(){
int two_d[3][4];

srand(time(NULL));

for(int i = 0; i < 3; i++){
  for(int j = 0; j < 4; j++){
    two_d[i][j] = rand()%10;
  }
}

Print_two_d(two_d, 3, 4);

return 0;
}


void Print_two_d(int two_d[][4], int rows, int cols){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d ",two_d[i][j]);
    }
    printf("\n");
  }
}
