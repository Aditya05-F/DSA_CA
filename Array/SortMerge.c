#include <stdio.h>

// Function to merge two sub-arrays
void merge(int arr[], int left, int mid, int right) {
    int size1 = mid - left + 1;
    int size2 = right - mid;

    // Create temporary arrays
    int Left[size1], Right[size2];

    // Copy data to temporary arrays
    for (int i = 0; i < size1; i++)
        Left[i] = arr[left + i];
    for (int j = 0; j < size2; j++)
        Right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr
    int i = 0, j = 0, k = left;
    while (i < size1 && j < size2) {
        if (Left[i] <= Right[j])
            arr[k++] = Left[i++];
        else
            arr[k++] = Right[j++];
    }

    // Copy remaining elements of Left[], if any
    while (i < size1)
        arr[k++] = Left[i++];

    // Copy remaining elements of Right[], if any
    while (j < size2)
        arr[k++] = Right[j++];
}

// Function to implement Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {6, 8, 2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
