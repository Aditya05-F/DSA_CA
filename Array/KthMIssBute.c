#include <stdio.h>

// Function to find the k-th missing number in a sorted array
int KthMiss(int arr[], int n, int k) {
    int missingCount = 0;
    int current = 1;
    int i = 0;

    while (missingCount < k) {
        if (i < n && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k)
                return current;
        }
        current++;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    int result = KthMiss(arr, n, k);
    printf("The %d-th missing number is: %d\n", k, result);

    return 0;
}
