#include <stdio.h>

void insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
            else
            {
                break;
            }
        }
    }
}

int isPossible(int arr[], int n, int cow, int minDistance)
{
    insertion(arr, n);
    int cCount = 1;
    int pos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= minDistance)
        {
            cCount++;
            pos = arr[i];
            if (cCount >= cow)
            {
                return 1;
            }
        }
    }
    return 0;
}

int allocate(int arr[], int n, int cow)
{
    insertion(arr, n);
    int start = 0;
    int end = arr[n - 1] - arr[0];
    int ans = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossible(arr, n, cow, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cows = 3;
    int result = allocate(arr, n, cows);
    printf("Largest minimum distance = %d\n", result);
    return 0;
}
