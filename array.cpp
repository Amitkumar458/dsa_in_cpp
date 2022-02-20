#include <iostream>
using namespace std;

// Find max_num of an given array
void maxnum()
{
    int a[5] = {10, 11, 12, 13, 14};
    int len = sizeof(a) / sizeof(a[0]);
    int maxNo = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        maxNo = max(maxNo, a[i]);
    }
    cout << maxNo << endl;
}

// Searching in arrays
void search()
{
    int arr[] = {12, 13, 16, 34, 23, 16, 65, 23};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 16;
    for (int i = 0; i < len; i++)
    {
        if (key == arr[i])
        {
            cout << i << endl;
        }
    }
}

// Searching an array using binary search;
int binary()
{
    int arr[] = {12, 14, 15, 18, 28, 29, 34, 39, 45};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 34;
    int s = 0;
    int n = len;
    while (s <= n)
    {
        int mid = (s + n) / 2;
        if (arr[mid] > key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            n = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

// Sorting a array using c++;
void arraysort()
{
    int arr[] = {12, 23, 15, 18, 90, 29, 34, 3, 13};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << " ";
    }
}

// Sorting An Array Using Bubble Sort...
int bubblesort(int arr[], int len, int n)
{
    if (len == 0)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        return 0;
    }

    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    bubblesort(arr, len - 1, n);
    return 0;
}

// Sorting an using Insertion Sort...
void insertionsort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << " ";
    }
}

// Max till i => [1 , 0 , 5 , 4 , 6 , 8] = [1 , 1 , 5 , 5 , 6 , 8]
void maxtilli(int arr[], int len)
{
    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i]<max)
        {
            arr[i] = max;
        }
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << " ";
    }
}

void addsubarray(int arr[] , int len) {
   int add = 0;
   for (int i = 0; i < len; i++)
   {
       for (int j = i; j < len; j++)
       {
           for (int k = i; k <= j; k++)
           {
              add+=arr[k];
           } 
       }
   }
   cout<<add<<endl;
}

int main()
{
    // int arr[] = {1 , 2 , 2};
    // int len = sizeof(arr) / sizeof(arr[0]);
    // bubblesort(arr , len , len);
    // insertionsort(arr , len);
    // maxtilli(arr, len);
    print2darray();
    return 0;
}
