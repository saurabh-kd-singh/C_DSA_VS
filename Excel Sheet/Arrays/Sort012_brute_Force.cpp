#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
    int c0=0, c1=0, c2=0;

    for (int i = 0; i < n; i++)
    {
        switch(a[i])
        {
            case 0 : c0++;
            break;

            case 1 : c1++;
            break;

            case 2 : c2++;
            break;
        }
    }

    int i = 0;

    while (c0)
    {
        a[i++]=0;
        c0--;
    }

    while (c1)
    {
        a[i++]=1;
        c1--;
    }

    while (c2)
    {
        a[i++]=2;
        c2--;
    }
    
    
}

int main()
{
    int a[] = {0,2,1,2,0};
    int n = 5;
    sort012(a , n);
    
    for(auto i : a)
    {
        cout << i << " ";
    }
    
    return 0;
}