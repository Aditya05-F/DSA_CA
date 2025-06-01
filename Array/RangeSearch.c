// #include<stdio.h>
// #include<stdlib.h>
// int *SearchRange(int arr[], int n, int targate)
// {
//     int left = 0, right = n - 1, first = -1, last = -1;
//     int *index = (int *)calloc(2 , sizeof(int));
//     while (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == targate)
//         {
//             first = mid;
//             right = mid - 1;
//         }
//         else if (arr[mid] > targate)
//         {
//             right = mid - 1;
//         }
//         else if (arr[mid] < targate)
//         {
//             left = mid + 1;
//         }
//     }
//     left = 0, right = n - 1;
//     while (left < right)
//     {
//         int mid = left + right / 2;
//         if (arr[mid] == targate)
//         {
//             last = mid;
//             left = mid + 1;
//         }
//         else if (arr[mid] > targate)
//         {
//             right = mid - 1;
//         }
//         else if (arr[mid] < targate)
//         {
//             left = mid + 1;
//         }
//     }
//     *index = first;
//     *(index + 1) = last;
//     return index;
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 3, 4, 4, 4, 4, 6, 7, 9};
//     int *index = SearchRange(arr, 10, 4);
//     printf("%d", *index);
//     printf("%d", *(index + 1));
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int *SearchRange(int arr[], int n, int target) {
    int left = 0, right = n - 1, first = -1, last = -1;
    int *index = (int *)calloc(2 , sizeof(int));

    // Find first occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            first = mid;
            right = mid - 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // Find last occurrence
    left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            last = mid;
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    index[0] = first;
    index[1] = last;
    return index;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 6, 7, 9};
    int *index = SearchRange(arr, 10, 4);
    printf("First: %d, Last: %d\n", index[0], index[1]);
    free(index); // Don't forget to free the allocated memory
    return 0;
}
