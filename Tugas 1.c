#include <stdio.h>
#include <stdlib.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int x = 0; x < n - i - 1; x++) {
            if (arr[x] > arr[x + 1]) {
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // Allocate memory for the array
    int *nilai = (int *)malloc(N * sizeof(int));
    if (nilai == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read input values into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    // Perform bubble sort
    bubbleSort(nilai, N);

    // Print the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

    // Free allocated memory
    free(nilai);

    return 0;
}
