#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 2, 3, 4, 5, 6};
    int occ[8] = {0};
    for (int i = 0; i < 7; i++)
    {
        occ[arr[i]-1]++;
    }
    cout << "Ocurance Array:";
    for (int i = 0; i < 7; i++)
    {
        cout << occ[i] << " ";
    }
    for (int i = 1; i < 7; i++)
    {
        if (occ[i] == 0)

        {
            cout << "Missing Element Is: " << i+1;
        }
    }
     for (int i = 1; i < 7; i++)
    {
        if (occ[i] >1)

        {
            cout << "\nRepeting Element Is: " << i+1;
        }
    }
    return 0;
}
