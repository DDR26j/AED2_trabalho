//CÓDIGO COM 10 ELEMENTOS
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


//Código e avaliação com 100000 números
//Vetor totalmente ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int meio, int inicio, int fim)
{
    int i, j, k, B[100000];
    i = inicio;
    j = meio + 1;
    k = inicio;

    while (i <= meio && j <= fim)
    {
        if (A[i] > A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= meio)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= fim)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = inicio; i <= fim; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int inicio, int fim){
    int meio; 
    if(inicio<fim){
        meio = (inicio + fim) /2;
        mergeSort(A, inicio, meio);
        mergeSort(A, meio+1, fim);
        merge(A, meio, inicio, fim);
    }
}

int main()
{
    int n = 100000;
    int j, A[100000];
    for(j = 0; j < 100000; j++){
      A[j] = rand() % 100000;
    } 
    
    mergeSort(A, 0, 99999);
    printArray(A, n);
    return 0;
} 


//Vetor totalmente ordenado crescente

#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int meio, int inicio, int fim)
{
    int i, j, k, B[100000];
    i = inicio;
    j = meio + 1;
    k = inicio;

    while (i <= meio && j <= fim)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= meio)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= fim)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = inicio; i <= fim; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int inicio, int fim){
    int meio; 
    if(inicio<fim){
        meio = (inicio + fim) /2;
        mergeSort(A, inicio, meio);
        mergeSort(A, meio+1, fim);
        merge(A, meio, inicio, fim);
    }
}

int main()
{
    int n = 100000;
    int j, A[100000];
    for(j = 0; j < 100000; j++){
      A[j] = rand() % 100000;
    } 
    
    mergeSort(A, 0, 99999);
    printArray(A, n);
    return 0;
} 


//Vetor primeira metade ordenado crescente e segunda metade ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

void imprimi_Array(int *A, int n){
  for(int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void merge(int A[], int meio, int inicio, int fim){
  int i, j, k, B[100000];
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

void mergeINV(int A[], int meio, int inicio, int fim)
{
    int i, j, k, B[100000];
    i = inicio;
    j = meio + 1;
    k = inicio;

    while (i <= meio && j <= fim)
    {
        if (A[i] > A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= meio)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= fim)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = inicio; i <= fim; i++)
    {
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

void mergeSortINV(int A[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        mergeSortINV(A, inicio, meio);
        mergeSortINV(A, meio + 1, fim);
        mergeINV(A, meio, inicio, fim);
    }
}

int main(){
  int j, A[100000];
  int c[50000];
  int d[50000];
  int y = 0;
  int t = 50000;
  int n = 100000;
  for(j = 0; j < 100000; j++){
      A[j] = rand() % 100000;
  }
  for(int q = 0; q < 50000; q++){
      c[q] = A[q];
  }
  mergeSort(c, 0, 49999);
  for(int w = 0; w < 50000; w++){
      A[w] = c[w];
  }
  for(int e = 0; e < 50000; e++){
      d[e] = A[t];
      t++;
  }
  mergeSortINV(d, 0, 49999);
  for(int r = 50000; r < 100000; r++){
      A[r] = d[y];
      y++;
  }
  imprimi_Array(A, n);
  return 0;
}


//Vetor primeira metade ordenado decrescente e segunda metade ordenado crescente
#include <stdio.h>
#include <stdlib.h>

void imprimi_Array(int *A, int n){
  for(int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

void merge(int A[], int meio, int inicio, int fim){
  int i, j, k, B[100000];
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

void mergeINV(int A[], int meio, int inicio, int fim)
{
    int i, j, k, B[100000];
    i = inicio;
    j = meio + 1;
    k = inicio;

    while (i <= meio && j <= fim)
    {
        if (A[i] > A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= meio)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= fim)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = inicio; i <= fim; i++)
    {
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

void mergeSortINV(int A[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        mergeSortINV(A, inicio, meio);
        mergeSortINV(A, meio + 1, fim);
        mergeINV(A, meio, inicio, fim);
    }
}

int main(){
  int j, A[100000];
  int c[50000];
  int d[50000];
  int y = 0;
  int t = 50000;
  int n = 100000;
  for(j = 0; j < 100000; j++){
      A[j] = rand() % 100000;
  }
  for(int q = 0; q < 50000; q++){
      c[q] = A[q];
  }
  mergeSortINV(c, 0, 49999);
  for(int w = 0; w < 50000; w++){
      A[w] = c[w];
  }
  for(int e = 0; e < 50000; e++){
      d[e] = A[t];
      t++;
  }
  mergeSort(d, 0, 49999);
  for(int r = 50000; r < 100000; r++){
      A[r] = d[y];
      y++;
  }
  imprimi_Array(A, n);
  return 0;
}


//Elementos totalmente desordenados

#include <stdio.h>
#include <stdlib.h>

void imprimi_Array(int *A, int n){
  for(int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
}

int main(){
  int j, A[100000];
  int n = 100000;
  for(j = 0; j < 100000; j++){
      A[j] = rand() % 100000;
  }
  imprimi_Array(A, n);
  return 0;
}

