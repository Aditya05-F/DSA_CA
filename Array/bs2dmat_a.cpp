#include <iostream>
using namespace std;
int bs(int mat[][3], int row, int col, int x)
{
    int start = 0, end = row * col - 1, mid;
    int ri, ci;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        ri = mid / col;
        ci = mid % col;
        if (mat[ri][ci] == x)
        {
            cout << "The Index Is mat[" << ri << "]" << "[" << ci << "]"<<endl;
            return 1;
        }
        else if (mat[ri][ci] < x)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (bs(mat, 3, 3, 9))
    {
        cout << "The element is present";
    }
    else
        cout << "NOt present";
    return 0;
}
