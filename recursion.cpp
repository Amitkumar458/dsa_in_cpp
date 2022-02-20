#include <iostream>
#include <string>
using namespace std;

// Palidrome String --> if "aba' == 'aba" means this string is palidrome;
int palidrome(string a)
{
    int len = a.length();
    int result = true;
    for (int i = 0; i <= len / 2; i++)
    {
        if (a[i] == a[len - i - 1])
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    return result;
}

// pi replace with 3.14 in given in string ex --> amipikupig4qwpi =-> ami3.14ku3.14g4qw3.14
void pireplace(string s){
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
       cout<<"3.14";
       string ros = s.substr(2);
       pireplace(ros);
    }
    else {
        cout<<s[0];
       string ros = s.substr(1);
       pireplace(ros);
    }
}

// replace Duplicate from given string  --> good =-> god
void replaceduplicate(string s){
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == s[1])
    {
       string ros = s.substr(1);
       replaceduplicate(ros);
    }
    else {
       cout<<s[0];
       string ros = s.substr(1);
       replaceduplicate(ros);
    }
}

// Generate all substrings of a String --> ABC = A , B , C , AB , BC , AC , ABC ;
void subseq(string s , string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;   
    }
    
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros , ans);
    subseq(ros , ans+ch);
    
}

// Reverse of an string using recursion ex ==> binod =-> donib;
// find the reverse of a number like 125 --> 521;
void reverse(string s){
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

// replace All 'x' from given string into last position --> maxxmasxmixa =-> mamasmiaxxxx
void replacecharlast(string s){
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'x')
    {
       string ros = s.substr(1);
       replacecharlast(ros);
       cout<<'x';
    }
    else {
       cout<<s[0];
       string ros = s.substr(1);
       replacecharlast(ros);
    }
}

// Genetate all possible permutations of a string --> ABC = ABC , ACB , BAC , BCA , CAB , CBA;
void permutation(string s , string ans){
    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        string ros = s.substr(0 , i) + s.substr(i+1);
        char ch = s[i];
        permutation(ros , ans+ch);
    }
    
}


int main()
{
    // string num;
    // cout << "Enter the number = ";
    // cin >> num;
   
    return 0;
}