#include <iostream>
using namespace std;
int equalsumSubarray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int psum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        psum += arr[i];
        int ssum = sum - psum;
        if (psum == ssum)
            return 1;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (equalsumSubarray(arr, n))
        cout << "sub array found";
    else
        cout << "Not Found";
    return 0;
}
