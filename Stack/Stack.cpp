#include <iostream>
using namespace std;

#define n 100

class stack
{
    int* arr;
    int top;
    public:
    stack() {
      this->arr = new int[n];
      this->top = -1;
    }
    void push(int x) {
       if (top == n-1)
       {
           cout<<"Stack overflow"<<endl;
           return;
       }
       top++;
       arr[top] = x;
       
    }
    void pop() {
        if (top == -1)
        {
            cout<<"No Element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top() {
        if (top == -1)
        {
            cout<<"No Element in Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty() {
        return top==-1;
    }
};

int main() {
    stack stk;
    stk.push(23);
    stk.push(45);
    stk.push(15);
    stk.pop();
    cout<<stk.Top()<<endl;
    cout<<stk.empty()<<endl;
    return 0;
}
