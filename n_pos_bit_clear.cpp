#include <iostream>
using namespace std;

int getbit(int n, int pos)
{
    return (n & ~(1 << pos));
}

int main()
{
    int number, position;
    cout << "Enter your number = ";
    cin >> number;
    cout << "Enter position = ";
    cin >> position;
    cout << getbit(number, position) << endl;
    return 0;
}
