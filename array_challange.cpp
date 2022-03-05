#include <iostream>
using namespace std;

// Brute Force Technique in c++ for find a majority of an element in array
void majorityarray()
{
    int arr[] = {5, 6, 4, 4, 6, 4, 4};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int count;
    for (int i = 0; i < arr_len; i++)
    {
        count = 0;
        for (int j = i; j < arr_len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > arr_len / 2)
        {
            cout << arr[i] << " is a majority element in array" << endl;
        }
    }
}

// best method in c++ for find a majority of an element in array
void majorityelement()
{
    int arr[] = {5, 6, 4, 4, 6, 4, 4};
    int count = 1;
    int ansIndex = arr[1];
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < arr_len; i++)
    {
        if (arr[i] == ansIndex)
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            ansIndex = arr[i];
            count++;
        }
    }
    int countforelement = 0;
    for (int k = 0; k < arr_len; k++)
    {
        if (arr[k] == ansIndex)
        {
            countforelement++;
        }
    }
    if (countforelement > arr_len / 2)
    {
        cout << ansIndex << " is a majority element in array" << endl;
    }
    else
    {
        cout << "There is no majority element in array" << endl;
    }
}

// find max sum of subarray in array --> Brute Force Technique;
void maxsubarray()
{
    int arr[] = {-1, 3, -2, 1, 5, 1, -4};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int maxsum = 0;
    for (int i = 0; i < arr_len; i++)
    {
        for (int j = i; j < arr_len - i; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (maxsum < sum)
            {
                maxsum = sum;
            }
        }
    }
    cout << maxsum << endl;
}

// stock buy and Sell prooblem in c++ --> Brute Force Technique;
void stock_buy_sell()
{
    int arr[] = {4, 6, 9, 2, 5, 7, 6, 10, 3};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int max_income = 0;
    for (int i = 0; i < arr_len; i++)
    {
        int sum = 0;
        for (int j = i; j < arr_len; j++)
        {
            sum = arr[j] - arr[i];
            if (sum > max_income)
            {
                max_income = sum;
            }
        }
    }
    cout << max_income << endl;
}

// stock buy and Sell prooblem in c++ --> Logic Technique and linear time complexcity
void stock_sell_buy()
{
    int arr[] = {4, 6, 9, 2, 5, 7, 6, 10, 3};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int minsofar = arr[4];
    int maxprofit = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] < minsofar)
        {
            minsofar = arr[i];
        }
        if ((arr[i] - minsofar) > maxprofit)
        {
            maxprofit = arr[i] - minsofar;
        }
    }
    cout << maxprofit << endl;
}

// Multiple time Stock Buy and Sell in c++ --> one stock one time
void mul_stock_buy_sell()
{
    int arr[] = {2, 1, 5, 2, 8};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int buy_stock = 0;
    int profit = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (buy_stock == 0)
        {
            if (arr[i] < arr[i + 1])
            {
                buy_stock = arr[i];
            }
        }
        if (buy_stock != 0)
        {
            if (arr[i] > arr[i + 1])
            {
                profit += (arr[i] - buy_stock);
                buy_stock = 0;
            }
        }
    }
    cout << profit << endl;
}

// Rain Water problem in c++ --> find collecting water in blocks;
void rain_water() {
    int arr[] = {3,1,2,4,0,1,3,2};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int left[arr_len];
    int right[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        left[i]=arr[i];
        if (i>0 && left[i]<left[i-1])
        {
            left[i] = left[i-1];
        }
        
    }
    for (int j = arr_len-1; j >= 0; j--)
    {
        right[j] = arr[j];
        if (right[j]<right[j+1] && j<arr_len-1)
        {
            right[j] = right[j+1];
        }
        
    }
    int ans = 0;
    for (int k = 0; k < arr_len; k++)
    {
        ans += min(left[k] , right[k]) - arr[k];
    }
      
      cout<<ans<<endl;
    
}

int main()
{
    rain_water();
    return 0;
}
