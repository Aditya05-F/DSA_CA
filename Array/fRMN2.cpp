#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 2, 3, 4, 5, 6};
    for (int i = 0; i < 7; i++)
    {
        arr[i]--;
    }
    for (int i = 0; i < 7; i++)
    {
        arr[arr[i] % 7] += 7;
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] / 7 == 0)
        {
            cout << "Missing Number is: " << i + 1;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] / 7 > 1)
        {
            cout << "\nRepeting Number is: " << i + 1;
        }
    }
    return 0;
}
