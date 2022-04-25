#include <iostream>
#include <stack>
using namespace std;

// Ques -> Largest Rectangular Area in a Histogram
void maxarea(int* arr , int len) {
    // Previous nearest smallest element :- 
    stack<int> stk;
    int arr2[len];
    for (int i = 0; i < len; i++)
    {
        while (!stk.empty() && arr[i] <= stk.top())
        {
            stk.pop();
        }
        if (stk.empty())
        {
            arr2[i] = -1;
            stk.push(arr[i]);
        }
        else
        {
            int k = i;
            while (arr[k] != stk.top())
            {
                k--;
            }
            arr2[i] = k;
            stk.push(arr[i]);
        }
    
    }
    // next neatest smallest element :-
    stack<int> stk2;
    int arr3[len];
    for (int i = len-1; i >= 0 ; i--)
    {
        while (!stk2.empty() && arr[i] <= stk2.top())
        {
            stk2.pop();
        }
        if (stk2.empty())
        {
            arr3[i] = len;
            stk2.push(arr[i]);
        }
        else
        {
            int j = i;
            while (arr[j] != stk2.top())
            {
                j++;
            }
            arr3[i] = j;
            stk2.push(arr[i]);
        }
        
    }
    int gretestarea = INT_MIN;
    int area;
    for (int i = 0; i < len; i++)
    {
        area = (arr3[i] - arr2[i] -1)*arr[i];
        if (area > gretestarea)
        {
            gretestarea = area;
        }
    }
    // cout<<arr2[0]<<"  "<<arr3[0] <<" "<<arr[0]<<endl;
    cout<<"The Gretest Rectangular Area Of Histogram is : " <<gretestarea<<endl;
    
}

int main () {
    int arr[] = {4,2,1,5,6,3,2,4,2};
    int len = sizeof(arr) / sizeof(arr[0]);
    maxarea(arr, len);
    return 0;
}
