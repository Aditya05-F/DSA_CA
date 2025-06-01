#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5] = {0};
    int n, f;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number:";
        cin >> n;
        cout << "Frequency:";
        cin >> f;
        arr[i] = n + f * 100;
    }
    cout << "The Stored array is\n ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Number: " << arr[i] % 100 << " Frequency: " << arr[i] / 100;
        cout << endl;
    }

    return 0;
}
