#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp, swaps = 0;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
    printf("Total number of swaps for Bubble Sort: %d\n", swaps);
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp, swaps = 0;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            // Swap elements
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swaps++;
        }
    }
    printf("Total number of swaps for Selection Sort: %d\n", swaps);
}

void printSwaps(int arr[], int n) {
    int i, j, temp, swaps;
    
    for (i = 0; i < n; i++) {
        swaps = 0;
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
        printf("%d: # of times %d is swapped\n", arr[i], swaps);
    }
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1:\n");
    printSwaps(array1, size1);
    bubbleSort(array1, size1);

    printf("\narray2:\n");
    printSwaps(array2, size2);
    selectionSort(array2, size2);

    return 0;
}
