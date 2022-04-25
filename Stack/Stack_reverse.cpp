#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st , int element) {
    if (st.empty())
    {
        st.push(element);
        return;
    }
    
    int ele = st.top();
    st.pop();
    insertAtBottom(st , element);
    st.push(ele);
}

void reverse(stack<int> &st) {
    if (st.empty())
    {
        return;
    }
    
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st , ele);
}

int main () {
    stack<int> st;
    st.push(12);
    st.push(15);
    st.push(18);
    st.push(21);
    st.push(24);
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}
