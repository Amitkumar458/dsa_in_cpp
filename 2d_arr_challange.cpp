#include <iostream>
using namespace std;

// mulatiplay 2 matrix in cpp;
void multiarr()
{
    int x = 3;
    int y = 3;
    int arr[x][y] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[x][y] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                sum += arr[i][k] * arr2[k][j];
            }
            cout << sum << " ";
            sum = 0;
        }
        cout << endl;
    }
}

// Matrix search
void matrixsearch()
{
    int x = 3;
    int y = 3;
    int arr[x][y] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int find = 4;
    int row = x;
    int col = y;
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int ele = arr[mid / y][mid % col];
        if (ele == find)
        {
            cout<<1<<endl;
        }
        if (ele < find)
        {
            start=mid+1;
        }
        if (ele > find)
        {
            start=mid-1;
        }
    }
}

int main()
{
    // multiarr();
    // matrixsearch();
    return 0;
}
