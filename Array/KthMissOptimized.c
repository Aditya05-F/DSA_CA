#include <stdio.h>
int KthMiss(int arr[], int n, int k)
{
    int left = 0, right = n - 1, ans = 0;
    ;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans + k;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 7, 8, 9, 10};
    printf("KTh:%d", KthMiss(arr, 8, 1));
    return 0;
}
