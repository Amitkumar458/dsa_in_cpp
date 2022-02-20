#include <iostream>
using namespace std;

// write a programm to cheak if a given number is power of 2;
int ispower2(int n)
{
    return n && !(n & (n - 1));
}

// write a programm to count the number of ones in binary representation of a number;
int numberofones(int n)
{
    int num = 0;
    while (n)
    {
        n = n & (n - 1);
        num++;
    }
    return num;
}

// write a programm to find the number of bits change when num1 convert to num2
int numberofbitchange(int a, int b)
{
    int n = a ^ b;
    int num = 0;
    while (n)
    {
        n = n & (n - 1);
        num++;
    }
    return num;
}

// write a programm to generate all passoble subsets of a set
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

// write a programm to find a unique number in an array where all numbers except one , are present twice;
void awesome(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    cout << xorsum << endl;
}

// write a programm to find 2 unique numbers in an array where all numbers except two , are present twice;
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    cout << xorsum << endl;
}

// a to the bower b with logb time complexcity
void fastpower(long a , long b)
{
    long res = 1;
    while (b > 0)
    {
        if ((b&1)!=0)
        {
           res = res*a;
        }
        a = a*a;
        b = b >> 1;
    }
    cout<<res<<endl;
}

int main()
{
    int num1, num2;
    cout << "Enter first number = ";
    cin >> num1;
    cout << "Enter second number = ";
    cin >> num2;
    fastpower(num1, num2);
    return 0;
}
