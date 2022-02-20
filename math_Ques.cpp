#include <iostream>
#include <string>
using namespace std;

// Find the gcd(greatest common divisable) of two numbers HCF;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// sieve of eratosthenes -- for find prime number of n Numbers;
void prime(int num)
{
    int arr[num + 1];
    for (int k = 0; k < num; k++)
    {
        arr[k] = true;
    }

    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i * i <= num; i++)
    {
        for (int j = 2 * i; j <= num; j += i)
        {
            arr[j] = false;
        }
    }
    for (int l = 0; l <= num; l++)
    {
        if (arr[l] != 0)
        {
            cout << l << "  ";
        }
    }
}

// Prime Factorisation uaing sieve --> 20 = 2*2*5
void primefatcor(int num)
{
    int spf[num + 1] = {false};
    for (int i = 2; i <= num; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= num; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= num; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (num != 1)
    {
        cout << spf[num] << " ";
        num = num / spf[num];
    }
}

// How many numbers between 1 and 1000 are divisible by 5 or 7 ?
void numfind(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            if (i % 7 == 0)
            {
            }
            else
            {
                cout << i << " ";
            }
        }
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
}

// find a to the power b using recursion method;
int resurtionpower(int a, int b)
{
    if (b >= 1)
    {
        return a * resurtionpower(a, b - 1);
    }
    return 1;
}

// Find the number of ways in an n*m matrix;
int matrix(int a, int b)
{
    if (a == 1 || b == 1)
    {
        return 1;
    }
    return matrix(a, b - 1) + matrix(a - 1, b);
}

// Josephus problem --> circle man problem
int circle(int a, int b)
{
    if (a == 1)
    {
        return 0;
    }
    return (circle(a - 1, b) + b) % a;
}


// Tiling problems in recursion 
int tiling(int L , int B , int l , int b){
    if (L == l || B == b)
    {
        return 1;
    }
    return tiling(L-1 , B , l , b) + tiling(L , B-1 , l , b);
}

// print all permutation of a given string ex--> abc = {abc , acb , bca , bac , cba , cab};

int main()
{
    // string num;
    // cout << "Enter the number = ";
    // cin >> num;
   
    return 0;
}
  