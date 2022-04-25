#include <iostream>
#include <stack>
using namespace std;

// Q(1) Previous Nearest Smaller Element
// Q(2) Next Smallest Element

// Q(1) Ans-> 
void prevnerstele(int arr[], int len)
{
    int length = len;
    stack<int> stk;
    for (int i = 0; i < length; i++)
    {
        while (!stk.empty() && stk.top() >= arr[i])
        {
            stk.pop();
        }
        
        if (stk.empty())
        {
            cout<<-1<<" ";
            stk.push(arr[i]);
        }
        else
        {
            cout<<stk.top()<<" ";
            stk.push(arr[i]);
        }
    
    }
}

int main()
{
    int arr[] = {4, 10, 5, 8, 20, 15, 3, 12};
    int len = sizeof(arr) / sizeof(arr[0]);
    prevnerstele(arr, len);
    return 0;
}
