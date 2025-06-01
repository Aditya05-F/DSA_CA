#include <stdio.h>
int search(int arr[], int n)
{
    int left = 0, right = n - 1, ans = arr[0];
    while (left <= right)
    {
        int mid = right + (left - right) / 2;
        if (arr[mid] >= arr[0])
        {
            left = mid + 1;
        }
        else if (arr[mid] < arr[0])
        {
            ans = arr[mid];
            right = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {9, 10, 1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d", search(arr, 10));
    return 0;
}
