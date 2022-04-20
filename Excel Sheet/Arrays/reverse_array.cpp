#include<iostream>
using namespace std;

void reverse(int a[], int l)
{
    for(int i=0; i<(l/2); i++)
    {
        int temp = a[i];
        a[i] = a[l-i-1];
        a[l-i-1] = temp;
    }

}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    reverse(a,10);
    for(auto i : a) cout<<i<<" ";
    return 0;
}