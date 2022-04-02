#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl; // 1 2 3 4
    
    vector<int> v2 (4 , 50);
    v2.push_back(1);
    for (auto element:v2)
    {
        cout<<element<<" ";
    }cout<<endl;

    swap(v,v2);

    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl; // 1 2 3 4
    
    v.pop_back();

    for (auto element:v)
    {
        cout<<element<<" ";
    }cout<<endl; // 1 2 3
    
    // write in reduce form of an given array;
    void reduceform() {
        int arr[] = {10,16,7,14,5,3,2,9};
        vector < pair<int,int> > v;
        
    }
    return 0;
}