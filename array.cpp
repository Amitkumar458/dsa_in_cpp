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

// Searching in arrays --> Brute force technique
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
// Binary search is use for sorted array
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
        if (arr[mid] == key)
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

// find a element in Infinite sorted Array
int find_ele_In_infinite_array() {
    int arr[40] = {1,3,5,6,7,8,9,12,13,15,16,18,19,20,23,26,27,28,29,30,34,36,37,38,40,41,43,45,47,48,50};
    int key = 37;
    int ending = 5;
    int starting = 0;
    while (arr[ending] < key)
    {
        starting = ending;
        ending = 2*ending;
    }
    int s = starting;
    int n = ending;
    while (s <= n)
    {
        int mid = (s + n) / 2;
        if (arr[mid] == key)
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

// searching an element in sorted and rotated array in c++;

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
    // maxtilli(arr, len);
    // print2darray();
    // cout<<binary()<<endl;
    // cout<<find_ele_In_infinite_array()<<endl;
    return 0;
}
