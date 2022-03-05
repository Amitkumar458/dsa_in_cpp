#include <iostream>
using namespace std;

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

// Sorting an array using Selection sort in c++;
void selectionsort() {
    int arr[] = {5,8,0,3,9,6,2};
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int index;
    for (int i = 0; i < arr_len; i++)
    {
        int low = arr[i];
        for (int j = i; j < arr_len; j++)
        {
            if (arr[j] < low)
            {
                low = arr[j];
                index = j;
            }
            
        }
        arr[index] = arr[i];
        arr[i] = low;
    }
    for (int k = 0; k < arr_len; k++)
    {
        cout<<arr[k]<<" ";
    }
    
}

// Sorting an array using Merge sort in c++;
int merge(int* arr , int l , int mid , int r) {
    int i = l;
    int j = mid+1;
    int k = l;
    int b[r];
    while (i<=mid && j<=r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while(j<=r){
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i<=mid)
        {
            b[k] = arr[i];
            k++;
            i++;
        }
        
    }
    for (int n = l; n <= r; n++)
    {
        arr[n] = b[n];
    }
    return 0;
}

int merge_sort_part(int* arr , int l , int r) {
    if (l<r)
    {
        int mid = (l+r)/2;
        merge_sort_part(arr , l , mid);
        merge_sort_part(arr , mid+1 , r);
        merge(arr , l , mid , r);
    }
    
    return 0;
}

void mregesort() {
    int l = 7;
    int* arr = new int[l];
    arr[0] = 4;
    arr[1] = 9;
    arr[2] = 6;
    arr[3] = 5;
    arr[4] = 2;
    arr[5] = 7;
    arr[6] = 1;
    arr[7] = 8;
    merge_sort_part(arr , 0 , l);
    for (int i = 0; i <= l; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
    // int arr[] = {1 , 2 , 2};
    // int len = sizeof(arr) / sizeof(arr[0]);
    // bubblesort(arr , len , len);
    // insertionsort(arr , len);
    // mregesort();
    return 0;
}