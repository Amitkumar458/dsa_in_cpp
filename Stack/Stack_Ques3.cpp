#include <iostream>
#include <stack>
using namespace std;
// Ques
// 1st -> ({((([])))}) = true;
// 2nd -> ({{(({(())}))}} = false;

bool isopen(char c){
    return c=='{' || c=='[' || c=='(';
}

bool isclose(char c){
    return c=='}' || c=='[' || c==')';
}

bool checkbracket(string br){
    stack<char> st;
    for (int i = 0; i < br.length(); i++)
    {
        if (isopen(br[i]))
        {
            st.push(br[i]);
        }
        else if (isclose(br[i]))
        {
            if (br[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (br[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (br[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
             
        }
    }
    return st.empty();
}

int main() {
    string bt = "((({{({})}})))";
    cout<<checkbracket(bt)<<endl;
    return 0;
}
