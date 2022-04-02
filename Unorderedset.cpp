#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    unordered_set <int> s = {3,5,9,7,8,4,1};
    s.insert(15);
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<(*i)<<" ";
    }cout<<endl;

    s.erase(15);

    if (s.find(15) == s.end())
    {
        cout<<"Not found "<<endl;
    }
    else
    {
        cout<<"Found element in set "<<endl;
    }
    
    return 0;
}