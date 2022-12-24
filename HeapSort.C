//CÓDIGO COM 10 ELEMENTOS
#include <stdio.h>
  
  void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void criaHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && arr[esquerda] > arr[maior])
      maior = esquerda;
  
    if (direita < n && arr[direita] > arr[maior])
      maior = direita;
  
    if (maior != i) {
      trocar(&arr[i], &arr[maior]);
      criaHeap(arr, n, maior);
    }
  }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeap(arr, n, i);
   
    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
      
      criaHeap(arr, i, 0);
    }
  }
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int arr[] = {1, 12, 9, 5, 6, 10, 4, 2, 11, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    printArray(arr, n);
  }


//Código e avaliação com 100000 números
//Vetor totalmente ordenado decrescente

#include <stdio.h>
#include <stdlib.h>

  void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void criaHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && arr[esquerda] < arr[maior])
      maior = esquerda;
  
    if (direita < n && arr[direita] < arr[maior])
      maior = direita;
  
    if (maior != i) {
      trocar(&arr[i], &arr[maior]);
      criaHeap(arr, n, maior);
    }
  }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeap(arr, n, i);
  
    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
  
      criaHeap(arr, i, 0);
    }
  }
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int j, arr[100000];
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
    printf("Array ordenado: \n");
    printArray(arr, n);
  } 


//Vetor totalmente ordenado crescente

  #include <stdio.h>
  #include <stdlib.h>
  
  void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void criaHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && arr[esquerda] > arr[maior])
      maior = esquerda;
  
    if (direita < n && arr[direita] > arr[maior])
      maior = direita;
  
    if (maior != i) {
      trocar(&arr[i], &arr[maior]);
      criaHeap(arr, n, maior);
    }
  }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeap(arr, n, i);
  
    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
  
      criaHeap(arr, i, 0);
    }
  }
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int j, arr[100000];
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
    printf("Array ordenado: \n");
    printArray(arr, n);
  } 


//Vetor primeira metade ordenado crescente e segunda metade ordenado decrescente

#include <stdio.h>
#include <stdlib.h>
  
  void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void criaHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && arr[esquerda] > arr[maior])
      maior = esquerda;
  
    if (direita < n && arr[direita] > arr[maior])
      maior = direita;
  
    if (maior != i) {
      trocar(&arr[i], &arr[maior]);
      criaHeap(arr, n, maior);
    }
  }

  void criaHeapINV(int arr[], int n, int i) {
      int maior = i;
      int esquerda = 2 * i + 1;
      int direita = 2 * i + 2;
    
      if (esquerda < n && arr[esquerda] < arr[maior])
        maior = esquerda;
    
      if (direita < n && arr[direita] < arr[maior])
        maior = direita;
    
      if (maior != i) {
        trocar(&arr[i], &arr[maior]);
        criaHeapINV(arr, n, maior);
      }
    }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeap(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
      criaHeap(arr, i, 0);
    }
  }

  void heapSortINV(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeapINV(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
      criaHeapINV(arr, i, 0);
    }
  }
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int j, arr[100000];
    int q = 0, y = 50000, B[50000], C[50000];
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    
    for(int w = 0; w < 50000; w++){
      B[w] = arr[w];
    }
    int r = sizeof(B)/sizeof(B[0]);
    heapSort(B, r);
    for(int e = 0; e < 50000; e++){
      arr[e] = B[e];
    }
    for(int t = 0; t < 50000; t++){
      C[t] = arr[y];
      y++;
    }
    int u = sizeof(C)/sizeof(C[0]);
    heapSortINV(C, u);
    for(int i = 50000; i < 100000; i++){
      arr[i] = C[q];
      q++;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
  }


//Vetor primeira metade ordenado decrescente e segunda metade ordenado crescente

#include <stdio.h>
#include <stdlib.h>
  
  void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
  void criaHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
  
    if (esquerda < n && arr[esquerda] > arr[maior])
      maior = esquerda;
  
    if (direita < n && arr[direita] > arr[maior])
      maior = direita;
  
    if (maior != i) {
      trocar(&arr[i], &arr[maior]);
      criaHeap(arr, n, maior);
    }
  }

  void criaHeapINV(int arr[], int n, int i) {
      int maior = i;
      int esquerda = 2 * i + 1;
      int direita = 2 * i + 2;
    
      if (esquerda < n && arr[esquerda] < arr[maior])
        maior = esquerda;
    
      if (direita < n && arr[direita] < arr[maior])
        maior = direita;
    
      if (maior != i) {
        trocar(&arr[i], &arr[maior]);
        criaHeapINV(arr, n, maior);
      }
    }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeap(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
      criaHeap(arr, i, 0);
    }
  }

  void heapSortINV(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      criaHeapINV(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      trocar(&arr[0], &arr[i]);
      criaHeapINV(arr, i, 0);
    }
  }
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int j, arr[100000];
    int q = 0, y = 50000, B[50000], C[50000];
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    
    for(int w = 0; w < 50000; w++){
      B[w] = arr[w];
    }
    int r = sizeof(B)/sizeof(B[0]);
    heapSortINV(B, r);
    for(int e = 0; e < 50000; e++){
      arr[e] = B[e];
    }
    for(int t = 0; t < 50000; t++){
      C[t] = arr[y];
      y++;
    }
    int u = sizeof(C)/sizeof(C[0]);
    heapSort(C, u);
    for(int i = 50000; i < 100000; i++){
      arr[i] = C[q];
      q++;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
  }


//Elementos totalmente desordenados

#include <stdio.h>
#include <stdlib.h>
  
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int j, arr[100000];
    for(j = 0; j < 100000; j++){
      arr[j] = rand() % 100000;
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
  }
