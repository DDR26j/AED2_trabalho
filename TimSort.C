//CÓDIGO COM 10 ELEMENTOS
#include <stdio.h>

int run = 32;

void insertionSort(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t < arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int l1 = m - l + 1, l2 = r - m;
  int esquerda[l1], direita[l2];
  for(i = 0; i < l1; i++)
    esquerda[i] = arr[l + 1];
  for(i = 0; i < l2; i++)
    direita[i] = arr[m + 1 + 1];

  i = 0;
  j = 0;
  k = l;
  while(i < l1 && j < l2){
    if(esquerda[i] <= direita[j]){
      arr[k] = esquerda[i];
      i++;
    }
    else{
      arr[k] = direita[j];
      j++;
    }
    k++;
  }
  while(i < l1){
    arr[k] = esquerda[i];
    k++;
    i++;
  }
  while(j < l2){
    arr[k] = direita[j];
    k++;
    j++;
  }
}

void timSort(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 31) < (n - 1))
      insertionSort(arr, i, (i + 31));
    else
      insertionSort(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[] = {8, 3, 17, 6, 14, 5, 7, 12, 4, 2}, n = 10;
    timSort(arr, n);
    imprimiArray(arr, n);
    return 0;
}


//Código e avaliação com 100000 números
//Vetor totalmente ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

int run = 100000;

void insertionSort(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t > arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int l1 = m - l + 1, l2 = r - m;
  int esquerda[l1], direita[l2];
  for(i = 0; i < l1; i++)
    esquerda[i] = arr[l + 1];
  for(i = 0; i < l2; i++)
    direita[i] = arr[m + 1 + 1];

  i = 0;
  j = 0;
  k = l;
  while(i < l1 && j < l2){
    if(esquerda[i] <= direita[j]){
      arr[k] = esquerda[i];
      i++;
    }
    else{
      arr[k] = direita[j];
      j++;
    }
    k++;
  }
  while(i < l1){
    arr[k] = esquerda[i];
    k++;
    i++;
  }
  while(j < l2){
    arr[k] = direita[j];
    k++;
    j++;
  }
}

void timSort(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSort(arr, i, (i + 99999));
    else
      insertionSort(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[100000], n = 100000, j;
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    timSort(arr, n);
    imprimiArray(arr, n);
    return 0;
}


//Vetor totalmente ordenado crescente

#include <stdio.h>
#include <stdlib.h>

int run = 100000;

void insertionSort(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t < arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int l1 = m - l + 1, l2 = r - m;
  int esquerda[l1], direita[l2];
  for(i = 0; i < l1; i++)
    esquerda[i] = arr[l + 1];
  for(i = 0; i < l2; i++)
    direita[i] = arr[m + 1 + 1];

  i = 0;
  j = 0;
  k = l;
  while(i < l1 && j < l2){
    if(esquerda[i] <= direita[j]){
      arr[k] = esquerda[i];
      i++;
    }
    else{
      arr[k] = direita[j];
      j++;
    }
    k++;
  }
  while(i < l1){
    arr[k] = esquerda[i];
    k++;
    i++;
  }
  while(j < l2){
    arr[k] = direita[j];
    k++;
    j++;
  }
}

void timSort(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSort(arr, i, (i + 99999));
    else
      insertionSort(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[100000], n = 100000, j;
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    timSort(arr, n);
    imprimiArray(arr, n);
    return 0;
}


//Vetor primeira metade ordenado crescente e segunda metade ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

int run = 100000;

void insertionSort(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t < arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void insertionSortINV(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t > arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int l1 = m - l + 1, l2 = r - m;
  int esquerda[l1], direita[l2];
  for(i = 0; i < l1; i++)
    esquerda[i] = arr[l + 1];
  for(i = 0; i < l2; i++)
    direita[i] = arr[m + 1 + 1];

  i = 0;
  j = 0;
  k = l;
  while(i < l1 && j < l2){
    if(esquerda[i] <= direita[j]){
      arr[k] = esquerda[i];
      i++;
    }
    else{
      arr[k] = direita[j];
      j++;
    }
    k++;
  }
  while(i < l1){
    arr[k] = esquerda[i];
    k++;
    i++;
  }
  while(j < l2){
    arr[k] = direita[j];
    k++;
    j++;
  }
}

void timSort(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSort(arr, i, (i + 99999));
    else
      insertionSort(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void timSortINV(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSortINV(arr, i, (i + 99999));
    else
      insertionSortINV(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[100000], n = 100000, j, B[50000], e = 50000;
    int C[50000], q = 0;
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    for(int f = 0; f < 50000; f++){
      B[f] = arr[f];
    }
    timSort(B, e);
    for(int w = 0; w < 50000; w++){
      arr[w] = B[w];
    }
    for(int r = 0; r < 50000; r++){
      C[r] = arr[e];
      e++;
    }
    timSortINV(C, 50000);
    for(int t = 50000; t < 100000; t++){
      arr[t] = C[q];
      q++;
    }
    imprimiArray(arr, n);
    return 0;
}


//Vetor primeira metade ordenado decrescente e segunda metade ordenado crescente

#include <stdio.h>
#include <stdlib.h>

int run = 100000;

void insertionSort(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t < arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void insertionSortINV(int arr[], int l, int r){
  int i, t, j;
  for(i = l + 1; i <= r; i++){
    t = arr[i];
    for(j = i -1; j >= l; j--){
      if(t > arr[j])
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = t;
  }
}

void merge(int arr[], int l, int m, int r){
  int i, j, k;
  int l1 = m - l + 1, l2 = r - m;
  int esquerda[l1], direita[l2];
  for(i = 0; i < l1; i++)
    esquerda[i] = arr[l + 1];
  for(i = 0; i < l2; i++)
    direita[i] = arr[m + 1 + 1];

  i = 0;
  j = 0;
  k = l;
  while(i < l1 && j < l2){
    if(esquerda[i] <= direita[j]){
      arr[k] = esquerda[i];
      i++;
    }
    else{
      arr[k] = direita[j];
      j++;
    }
    k++;
  }
  while(i < l1){
    arr[k] = esquerda[i];
    k++;
    i++;
  }
  while(j < l2){
    arr[k] = direita[j];
    k++;
    j++;
  }
}

void timSort(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSort(arr, i, (i + 99999));
    else
      insertionSort(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void timSortINV(int arr[], int n){
  int i, tamanho, esquerda, direita;
  for(i = 0; i < n; i = i + run){
    if((i + 99999) < (n - 1))
      insertionSortINV(arr, i, (i + 99999));
    else
      insertionSortINV(arr, i, (n - 1));
  }

  for(tamanho = run; tamanho < n; tamanho = 2*tamanho){
    for(esquerda = 0; esquerda < n; esquerda = esquerda + (2*tamanho)){
      int meio = esquerda + tamanho - 1;
      if((esquerda + 2*tamanho - 1) < (n - 1))
        direita = (esquerda + 2*tamanho - 1);
      else
        direita = n - 1;
      merge(arr, esquerda, meio, direita);
    }
  }
}

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[100000], n = 100000, j, B[50000], e = 50000;
    int C[50000], q = 0;
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    for(int f = 0; f < 50000; f++){
      B[f] = arr[f];
    }
    timSortINV(B, e);
    for(int w = 0; w < 50000; w++){
      arr[w] = B[w];
    }
    for(int r = 0; r < 50000; r++){
      C[r] = arr[e];
      e++;
    }
    timSort(C, 50000);
    for(int t = 50000; t < 100000; t++){
      arr[t] = C[q];
      q++;
    }
    imprimiArray(arr, n);
    return 0;
}


//Elementos totalmente desordenados

#include <stdio.h>
#include <stdlib.h>

void imprimiArray(int arr[], int n){
  int i;
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}

int main() {
    int arr[100000], n = 100000, j;
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
  
    imprimiArray(arr, n);
    return 0;
}
