#include <stdio.h>

// Function to perform Bubble Sort on an array and count swaps
void bubbleSort(int arr[], int n) {
    int i, j, temp, swaps = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    printf("Total number of swaps for Bubble Sort: %d\n", swaps);
}

// Function to perform Selection Sort on an array and count swaps
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp, swaps = 0;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
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

// Function to print the number of swaps for each element in the array
void printSwaps(int arr[], int n, const char *sortType) {
    int i, j, temp, totalSwaps = 0;

    printf("%s:\n", sortType);

    for (i = 0; i < n; i++) {
        int swaps = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swaps++;
            }
        }
        printf("%d: # of times %d is swapped\n", arr[i], swaps);
        totalSwaps += swaps;
    }

    //printf("Total number of swaps for %s: %d\n", sortType, totalSwaps);
}

int main() {
    // Example arrays
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    // Sort and print swaps for array1 using Bubble Sort
    printSwaps(array1, size1, "Bubble Sort");
    bubbleSort(array1, size1);

    // Reset array1
    int resetArray1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    // Sort and print swaps for array1 using Selection Sort
    printSwaps(resetArray1, size1, "Selection Sort");
    selectionSort(resetArray1, size1);

    // Reset array2
    int resetArray2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

    // Sort and print swaps for array2 using Bubble Sort
    printSwaps(array2, size2, "Bubble Sort");
    bubbleSort(array2, size2);

    // Sort and print swaps for array2 using Selection Sort
    printSwaps(resetArray2, size2, "Selection Sort");
    selectionSort(resetArray2, size2);

    return 0;
}

