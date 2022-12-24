#include <stdio.h>

void imprimi_Array(int *A, int n){
  for(int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void merge(int A[], int meio, int inicio, int fim){
  int i, j, k, B[100];
  i = inicio;
  j = meio + 1;
  k = inicio;

  while(i <= meio && j <= fim){
    if(A[i] < A[j]){
      B[k] = A[i];
      i++;
      k++;
    }
    else{
      B[k] = A[j];
      j++;
      k++;
    }
  }

  while(i <= meio){
    B[k] = A[i];
    k++;
    i++;
  }
  while(j <= fim){
    B[k] = A[j];
    k++;
    j++;
  }

  for(int i = inicio; i <= fim; i++){
    A[i] = B[i];
  }
}

void mergeSort(int A[], int inicio, int fim){
  int meio;
  if(inicio < fim){
    meio = (inicio + fim)/2;
    mergeSort(A, inicio, meio);
    mergeSort(A, meio + 1, fim);
    merge(A, meio, inicio, fim);
  }
}

int main(){
  int A[] = {9, 1, 4, 14, 4, 15, 6, 5, 11, 7};
  int n = 10;
  imprimi_Array(A, n);
  mergeSort(A, 0, 9);
  imprimi_Array(A, n);
  return 0;
}
