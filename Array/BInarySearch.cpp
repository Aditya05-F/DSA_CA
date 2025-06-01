#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int targate)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == targate)
        {
            return mid;
        }
        else if (arr[mid] > targate)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1; // Return -1 if the target is not found
}
void insertion(int arr[],int n)
{   
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
              
            }
            else
            {
                break;
            }
        }
        
    }
  
    
}
int main(int argc, char const *argv[])
{
    int arr[]={234,54,3244,523,4,7654,675,5456,745,6586,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    int t=binarySearch(arr,n,4);
    cout<<"The Index Of The Targate Is:"<<t<<endl;
    return 0;
}
