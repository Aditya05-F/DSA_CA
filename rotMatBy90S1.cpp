#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[j][2 - i] = mat[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Rotated Matrix"<<endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
