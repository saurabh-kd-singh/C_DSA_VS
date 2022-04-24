//You are given an array A, of N elements. 
//Find minimum index based distance between two elements of the array, x and y.

#include<iostream>
#include<stdlib.h>
using namespace std;

int min_dist(int a[], int n, int x, int y);

int main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,1,2,3,10,15};
    int res = min_dist(a, 15, 1, 10);
    if (res >= 0)
        cout << res;
    else
        cout << "Does not exists ";
    return 0;
}

int min_dist(int a[], int n, int x, int y)
{
    int x_pos=-1, y_pos=-1, min_dist=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(a[i]==x) x_pos=i;
        if(a[i]==y) y_pos=i;

        if(x_pos!=-1 && y_pos!=-1)
            if(abs(x_pos-y_pos)<min_dist) min_dist=abs(x_pos-y_pos);
    }

    if(x_pos==-1 || y_pos==-1)
        return -1;
    else
        return min_dist;
}