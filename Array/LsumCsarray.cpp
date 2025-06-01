#include <iostream>
#include <climits>
using namespace std;
int lscs(int arr[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int prefix=0;
        for (int j = i; j < n; j++)
        {
            prefix+=arr[j];
            maxi=max(maxi,prefix);
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {6,3,7,-18,7,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<lscs(arr,n);
}