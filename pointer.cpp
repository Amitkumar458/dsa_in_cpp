#include <iostream>
using namespace std;

void general() {
    int a = 4;
    int* b = &a;
    cout<<b<<endl;
    int arr[3] = {1,5,7};
    int * ptr = arr;
    cout<<ptr<<endl;
    for (int i = 0; i < 3; i++)
    {
      cout<<*(arr+i)<<endl;
    }
    int** ptr2 = &ptr;
    cout<<ptr2<<endl;
    cout<<**ptr2<<endl;
}

void changevalue(int* ptr){
  cout<<*ptr<<endl;
  *ptr = 25;
}

int main() {
    general();
    int a = 24;
    int* ptr = &a;
    changevalue(ptr);
    cout<<a<<endl;
    return 0;
}
