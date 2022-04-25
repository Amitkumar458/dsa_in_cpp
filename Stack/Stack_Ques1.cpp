#include <iostream>
#include <stack>
using namespace std;

// Reverse a Sentence using stack;
void reversestring(string s){
    stack<string> strg;
    string str = s;
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {
        while (str[i] != ' ' && i<s.length())
        {
            word += str[i];
            i++;
        }
        strg.push(word);
        word = "";
    }
    while (!strg.empty())
    {
        cout<<strg.top()<<" ";
        strg.pop();
    }
    
}

int main() {
    // stack<string> str;
    string s = "Hello My Name Is Amit Kumar";
    reversestring(s);
    return 0;
}
