#include <iostream>
using namespace std;

int getbit(int n , int pos){
    if ((n & (1<<pos)) != 0)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int number , position;
    cout<<"Enter your number = ";
    cin>>number;
    cout<<"Enter position = ";
    cin>>position;
    cout<<getbit(number , position)<<endl;
    return 0;
}
