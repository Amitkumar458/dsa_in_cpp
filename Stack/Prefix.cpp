#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// Prefix Expression evaluation
int PrefixEvaluation (string s) {
    stack<int> stk;
    for (int i = s.length() -1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stk.push(s[i] - '0');
        }
        else
        {
            int op1 = stk.top();
            stk.pop();
            int op2 = stk.top();
            stk.pop();
            switch (s[i])
            {
            case '+':
                stk.push(op1+op2);
                break;
            case '-':
                stk.push(op1-op2);
                break;
            case '*':
                stk.push(op1*op2);
                break;
            case '/':
                stk.push(op1/op2);
                break;
            case '^':
                stk.push(pow(op1 , op2));
                break;
            }
        }
        
    }
    return stk.top();
}

// change infix to prefix Expression
string reverse(string s){
    string res;
    for (int i = s.length() -1; i >= 0; i--)
    {
        res += s[i];
    }
    for (int i = 0; i < res.length(); i++)
    {
        if (res[i] == '(')
        {
            res[i] = ')';
        }
        else if (res[i] == ')')
        {
            res[i] = '(';
        }
        
    }
    
    return res;
}

int prec(char c) {
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
    
}

string InfixtoPrefix(string s) {
    string res;
    stack<char> st;
    string revs = reverse(s);
    for (int i = 0; i < revs.length(); i++)
    {
        if (revs[i] >= '0' && revs[i] <= '9')
        {
            res += revs[i];
        }
        else
        {
            if (revs[i] == '(')
            {
                st.push(revs[i]);
            }
            else if (revs[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && prec(st.top()) > prec(revs[i]))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(revs[i]);
            }
            
        }
        
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return reverse(res);
}

int main () {
    cout<<PrefixEvaluation("+-+7*4520")<<endl;
    cout<<InfixtoPrefix("7+4*5-2+0")<<endl;
    return 0;
}