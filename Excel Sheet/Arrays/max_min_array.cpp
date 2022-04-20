#include<iostream>
using namespace std;

void max_min(int a[], int l)
{
int min,max;

    if (a[0] < a[1])
    {
        min = a[0];
        max = a[1];
    }
    else
    {
        max = a[0];
        min = a[1];
    }
    
    for (int i = 2; i < l; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        else if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout <<"min = "<<min<<" "<<"max = "<<max;
}


int main()
{
    int a[] = {5,10,9,1,4,3,6,2,7,8};
    max_min(a,10);
    return 0;
}