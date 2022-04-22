#include<iostream>
using namespace std;

int subarray_sum(int a[], int n, int sum)
{
    int start=0;
    int curr_sum=a[0];
    for(int i=1; i<n; i++)
    {
        while (curr_sum > sum  &&  start < i-1)
        {
            curr_sum =curr_sum - a[start];
            start++;
        }

        if (curr_sum == sum)
        {
            cout << start << " - " << i-1;
            return 1;
        }

        if (i < n)
        {
            curr_sum = curr_sum + a[i];
        }
    }

    cout << " No subarray";
    return 0;
}

int main()
{
    int a[] = {1,2,3,7,5};
    int n=5, sum=12;

    subarray_sum(a, n , sum);

    return 0;
}