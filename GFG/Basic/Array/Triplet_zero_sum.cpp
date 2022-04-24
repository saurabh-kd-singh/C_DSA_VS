#include<iostream>
#include<stdlib.h>
using namespace std;

bool triplet_sum(int a[], int n);

int main()
{
    int a[5] = {0,-1,2,-3,1};
    
    bool res = triplet_sum(a, 5);

    if (res == 1)
    {
        cout << "Exists ";
    }
    else
    {
        cout << "Does not exists ";
    }
    
    return 0;
}

bool triplet_sum(int a[], int n)
{
    for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(a[i] + a[j] + a[k] == 0)
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
}