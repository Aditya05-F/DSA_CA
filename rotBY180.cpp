#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int k;
    cin>>k;
    int nor=k%4;
    while (nor != 0)
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        int start, end;
        for (int i = 0; i < 3; i++)
        {
            start = 0, end = 2;
            while (start <= end)
            {
                swap(mat[i][start], mat[i][end]);
                start++;
                end--;
            }
        }
        nor--;
    }

    cout << "Rotated Matri:\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
