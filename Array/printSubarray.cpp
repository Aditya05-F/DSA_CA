#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count = 0;
    int arr[] = {34,45,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}