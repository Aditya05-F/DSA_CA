#include<iostream>
#include <climits>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={32,4,3,-1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        {
            prefix=0;
        }
    }
    cout<<maxi;
    return 0;
}

