#include <iostream>
using namespace std;

#define n 100

class Stack
{
    int* arr;
    int top;
    public:
    Stack() {
        this->arr = new int[n];
        this->top = -1;
    }
    void push(int d) {
        if (top == n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = d;
    }
    void pop() {
        if (top == -1)
        {
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top() {
        if (top == -1)
        {
            cout<<"No element in stack "<<endl;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top==-1;
    }

};

int main () {
    Stack stk;
    stk.push(12);
    stk.push(23);
    cout<<stk.isEmpty()<<endl;
    while (!stk.isEmpty())
    {
        cout<<stk.Top()<<" ";
        stk.pop();
    }
    
    return 0;
}