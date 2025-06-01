#include <iostream>
using namespace std;
int BinararySearch_2dMAt(int mat[][3], int row, int col, int x)
{
    int start, end, mid;
    for (int i = 0; i < row; i++)
    {
        if (mat[i][0] <= x && mat[i][col - 1] >= x)
        {
            start = 0;
            end = col - 1;
            while (start <= end)
            {
                mid = start + (end - start) / 2;
                if (mat[i][mid] == x)
                {
                    return 1;
                }
                else if (mat[i][mid] < x)
                {
                    start++;
                }
                else if (mat[i][mid] > x)
                {
                    end--;
                }
            }
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (BinararySearch_2dMAt(mat, 3, 3, 1))
    {
        cout << "The Element Is present In The matrix";
    }
    else
        cout << "NOt present";
    return 0;
}
