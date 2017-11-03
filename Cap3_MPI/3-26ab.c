#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* genList(int n);
int isSorted(int* a, int n);
void Odd_even_sort( int  a[], int  n);
int main(){
  int n, i;
  int* lista;
  printf("Qual o tamanho da lista?\n");
  scanf("%d", &n);
  lista = genList(n);
  Odd_even_sort(lista,n);

  for(i = 0; i<n; i++){
    printf("%d ", lista[i]);
  }
  printf("\n");
  if(isSorted(lista,n) == 1){
    printf("a lista esta ordenada\n");
  }else{
    printf("a lista nao esta ordenada\n");
  }

  return 0;
}
/*
Gera uma lista de tamanhos aleatórios de tamanho 'n'
*/
int* genList(int n){
  srand(time(NULL));
  int *a = malloc(n*sizeof(int));
  int i;
  for(i = 0; i<n; i++){
    a[i] = rand()%100;;
  }
  printf("Lista gerada: \n");
  for(i = 0; i<n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");

  return a;
}
/*
Verifica se uma lista 'a' de tamanho 'n' está ordenada
retorna 1 caso verdadeiro, 0 caso contrário
*/
int isSorted(int* a, int n){
  int sorted = 1;
  for(int i = 1; i< n; i++){
    if(a[i]< a[i-1]){
      sorted = 0;
      break;
    }
  }
  return sorted;
}

/*-----------------------------------------------------------------
* Function:     Odd_even_sort
* Purpose:      Sort list using odd-even transposition sort
* In args:      n
* In/out args:  a
*/
void Odd_even_sort( int  a[]  /* in/out */, int  n    /* in     */) {
  int phase, i, temp;
  for (phase = 0; phase < n; phase++){
    if (phase % 2 == 0) { /* Even phase */
      for (i = 1; i < n; i += 2)
      if (a[i-1] > a[i]) {
        temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
      }
    } else { /* Odd phase */
      for (i = 1; i < n-1; i += 2){
        if (a[i] > a[i+1]) {
          temp = a[i];
          a[i] = a[i+1];
          a[i+1] = temp;
        }
      }
    }
    if(isSorted(a,n)){break;}
  }
}  /* Odd_even_sort */
