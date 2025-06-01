#include <stdio.h>
int isPossible(int arr[], int n, int student, int maxPage)
{
    int sCount = 1;
    int pCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxPage)
            return 0;
        if (arr[i] + pCount > maxPage)
        {
            sCount++;
            pCount = arr[i];
            if (sCount >= student)
            {
                return 0;
            }
        }
        else
        {
            pCount += arr[i];
        }
    }
    return 1;
}
int bookAllocate(int arr[], int n, int students)
{
    int max = 0, sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int start = max, end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, students, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 30, 40};
    int maxPage = bookAllocate(arr, 4, 2);
    if (maxPage == -1)
    {
        printf("Allocation Not Possible");
    }
    else
    {
        printf("The Max Page Is: %d", maxPage);
    }
    return 0;
}
