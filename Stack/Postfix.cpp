#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// Prefix expression evaluation :-
int PostfixEvaluation(string s) {
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            }

        }
        
    }
    return st.top();
}

// Change Infix to Postfix Expression in c++
int prec(char c) {
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '/')
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}

string InfixtoPostfix(string s) {
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            res += s[i];
        }
        else
        {
            switch (s[i])
            {
            case '(':
                st.push(s[i]);
                break;
            case ')':
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty())
                {
                    st.pop();   
                }
                break;
            default:
                while (!st.empty() && prec(st.top()) > prec(s[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            break;
            }
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    
    return res;
}

int main () {
    cout<<PostfixEvaluation("45355/-*9++")<<endl;
    cout<<InfixtoPostfix("4+5*(3-5/5)+9")<<endl;
}
