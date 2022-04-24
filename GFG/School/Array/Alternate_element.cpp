#include<iostream>
#include<stdlib.h>
using namespace std;

void print_alternate(int a[], int n);

int main()
{
    int a[5] = {1,2,3,4,5};
    
    print_alternate(a, 5);

    return 0;
}

void print_alternate(int a[], int n)
{
    
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout <<a[i]<<" ";
        }
    }
    
    
}