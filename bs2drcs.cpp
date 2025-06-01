#include <iostream>
using namespace std;
int bs(int mat[][3], int row, int col, int x)
{
    int i = 0, j = col - 1;
    while (i < row && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "index" << i << " " << j << endl;
            return 1;
        }
        else if (mat[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int mat[3][3]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    if(bs(mat,3,3,7))
    {
        cout<<"Present";
    }
    else
        cout<<"Not present";
    return 0;
}
