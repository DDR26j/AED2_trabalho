//CÓDIGO COM 10 ELEMENTOS
#include <stdio.h>

void countingSort(int array[], int size) {
  int output[10];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[10];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1, 9, 5, 7};
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  printArray(array, n);
}


//Código e avaliação com 100000 números
//Vetor totalmente ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

void countingSort(int array[], int size) {
  int q = 99999;
  int output[100000];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[100000];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[q] = output[i];
    q--;
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int j, array[100000];
  for(j = 0; j < 100000; j++){
    array[j] = rand() % 100000;
  }
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  printArray(array, n);
}


//Vetor totalmente ordenado crescente

#include <stdio.h>
#include <stdlib.h>

void countingSort(int array[], int size) {
  int output[100000];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[100000];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int j, array[100000];
  for(j = 0; j < 100000; j++){
    array[j] = rand() % 100000;
  }
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  printArray(array, n);
}


//Vetor primeira metade ordenado crescente e segunda metade ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

void countingSort(int array[], int size) {
  int output[100000];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[100000];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[100000], B[50000], C[50000], j, t = 50000, o = 49999;
  
  for(j = 0; j < 100000; j++){
      array[j] = rand() % 100000;
  }
  for(int w = 0; w < 50000; w++){
      B[w] = array[w];
  }
  int e = sizeof(B)/sizeof(B[0]);
  countingSort(B, e);
  for(int r = 0; r < 50000; r++){
      array[r] = B[r];
  }
  for(int y = 0; y < 50000; y++){
      C[y] = array[t];
      t++;
  }
  int u = sizeof(C)/sizeof(C[0]);
  countingSort(C, u);
  for(int i = 50000; i < 100000; i++){
      array[i] = C[o];
      o--;
  }
  
  int n = sizeof(array) / sizeof(array[0]);
  printArray(array, n);
}


//Vetor primeira metade ordenado decrescente e segunda metade ordenado crescente

#include <stdio.h>
#include <stdlib.h>

void countingSort(int array[], int size) {
  int output[100000];

  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  int count[100000];

  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[100000], B[50000], C[50000], j, t = 50000;
  int o = 49999, q = 0;
  
  for(j = 0; j < 100000; j++){
      array[j] = rand() % 100000;
  }
  for(int w = 0; w < 50000; w++){
      B[w] = array[w];
  }
  int e = sizeof(B)/sizeof(B[0]);
  countingSort(B, e);
  for(int r = 0; r < 50000; r++){
      array[r] = B[o];
      o--;
  }
  for(int y = 0; y < 50000; y++){
      C[y] = array[t];
      t++;
  }
  int u = sizeof(C)/sizeof(C[0]);
  countingSort(C, u);
  for(int i = 50000; i < 100000; i++){
      array[i] = C[q];
      q++;
  }
  
  int n = sizeof(array) / sizeof(array[0]);
  printArray(array, n);
}


//Elementos totalmente desordenados

#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[100000], j;
  
  for(j = 0; j < 100000; j++){
      array[j] = rand() % 100000;
  }
  
  int n = sizeof(array) / sizeof(array[0]);
  printArray(array, n);
}
