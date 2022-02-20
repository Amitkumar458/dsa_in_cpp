#include <iostream>
using namespace std;

void print2darray()
{
    int x = 3;
    int y = 3;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }

    // simple order print
    for (int k = 0; k < x; k++)
    {
        for (int l = 0; l < y; l++)
        {
            cout << arr[k][l] << " ";
        }
        cout << endl;
    }

    // find higest value in 2d array;
    int maxx = INT_MIN;
    for (int q = 0; q < x; q++)
    {
        for (int r = 0; r < y; r++)
        {
            if (arr[q][r] > maxx)
            {
                maxx = arr[q][r];
            }
        }
    }
    cout << "The maxx value of 2d array is : " << maxx << endl;

    // add row wise
    for (int m = 0; m < x; m++)
    {
        int sum = 0;
        for (int n = 0; n < y; n++)
        {
            sum += arr[m][n];
        }
        cout << sum << " ";
    }

    // add coloumn wise and find which colomn add is grater
    int addmaxxcol = INT_MIN;
    int maxxcolumn = -1;
    for (int o = 0; o < 3; o++)
    {
        int sum = 0;
        for (int p = 0; p < 3; p++)
        {
            sum += arr[p][o];
        }
        cout << sum << " ";
        if (sum > addmaxxcol)
        {
            addmaxxcol = sum;
            maxxcolumn = o;
        }
    }
    cout<<endl<<"The maxx of add column sum is : "<<addmaxxcol<<" which is in "<<maxxcolumn<<" column "<<endl;

    // 2d array print like a wave;
    for (int a = 0; a < y; a = a + 2)
    {
        for (int c = 0; c < x; c++)
        {
            cout<<arr[c][a]<<" ";
        }
    }
    for (int b = 1; b < y; b = b + 2)
    {
        for (int d = x - 1; d > -1; d--)
        {
            cout<<arr[d][b]<<" ";
        }
    }
}

int main ()
{
    print2darray();
    return 0;
}
