#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <map>
using namespace std;

// count distinct element in array
void dist_count() {
    int arr[] = {2,4,5,6,4,4,3,6,3,7,8,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    unordered_set <int> s;
    for (int element : arr)
    {
        s.insert(element);
    }
    cout<<s.size()<<endl;
}

// union of two arrays in cpp;
void union_of_arrays() {
    int arr1[] = {10,4,6,10,4};
    int arr2[] = {2,5,6,10,4};
    unordered_set <int> s;
    for (int element:arr1)
    {
        s.insert(element);
    }
    for (int element:arr2)
    {
        s.insert(element);
    }
    cout<<s.size()<<endl;
}

// intersection of two element in cpp
void intersection_of_arrays() {
    int arr1[] = {10,4,6,10,4};
    int arr2[] = {2,5,6,10,4};
    unordered_set <int> s;
    unordered_set <int> f;
    for (int element:arr1)
    {
        s.insert(element);
    }
    for (int element:arr2)
    {
        if (s.find(element) != s.end())
        {
            f.insert(element);
            s.erase(element);
        }
        
    }
    cout<<f.size()<<endl;
    for (auto i = f.begin(); i != f.end(); i++)
    {
        cout<<(*i)<<" ";
    }cout<<endl;
    
}


int main () {
    // dist_count();
    // union_of_arrays();
    // intersection_of_arrays();
    // subarray();
    count_dis_ele_window();
    return 0;
}
