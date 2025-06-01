#include <stdio.h>
int kokoBanana(int arr[], int n, int h)
{
    int min = arr[0], max = arr[0];
    int sum = 0;
    int ans = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= max)
            max = arr[i];
        if (arr[i] <= min)
            min = arr[i];
    }
    int start = min, end = max;
    while (start <= end)
    {
        int hours = 0;
        int mid = start + (end - start) / 2;

        for (int i = 0; i < n; i++)
        {
            hours += (arr[i] + mid - 1) / mid; // Calculate hours needed at speed 'mid'
        }

        if (hours <= h)
        {
            ans = mid;     // Update answer if within allowed hours
            end = mid - 1; // Try for a smaller speed
        }
        else
        {
            start = mid + 1; // Increase speed
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int arr[] = {3, 6, 11, 7};
    int speed = kokoBanana(arr, 4, 8);
    printf("\n%d", speed);

    return 0;
}
