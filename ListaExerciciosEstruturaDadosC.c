//1. (ORDENAÇÃO) Desenvolva um programa em C que tendo um vetor de n posições, imprima esse
//vetor ordenado em ordem crescente. Elabore um menu que escolha duas formas de ordenação:
//Bubble Sort ou InsertionSort.

#include <stdio.h>

void ordenadorBubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ordenadorInsertionSort(int arr[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int menu;

    printf("Digite o tamanho de seu vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os números: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    do {
        printf("\n::..Menu...::\n");
        printf("1 - Ordenar vetor Bubble Sort\n");
        printf("2 - Ordenar vetor Insertion Sort\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Opção Bubble Sort\n");
                ordenadorBubbleSort(vetor, n);
                printf("Vetor ordenado usando Bubble Sort: ");
                printArray(vetor, n);
                break;
            case 2:
                printf("Opção Insertion Sort\n");
                ordenadorInsertionSort(vetor, n);
                printf("Vetor ordenado usando Insertion Sort: ");
                printArray(vetor, n);
                break;
            case 0:
                printf("Finalizando programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (menu != 0);

    return 0;
}
-----------------------------------------------------------------------------------
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
