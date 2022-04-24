#include<iostream>
#include<stdlib.h>
using namespace std;

int BS(int a[], int n, int k);

int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    
    int res = BS(a, 10, 60);

    if (res >= 0)
    {
        cout << res;
    }
    else
    {
        cout << "Does not exists ";
    }
    
    return 0;
}

int BS(int a[], int n, int k)
{
    int beg=0, end=n-1;
    int mid = beg + (end-beg)/2;
    
    while (beg <= end)
    {
        if(a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] < k)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = beg + (end-beg)/2;
    }
    return -1;
    
}