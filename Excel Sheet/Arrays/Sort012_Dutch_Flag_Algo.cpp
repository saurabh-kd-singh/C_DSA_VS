#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void Sort012(int a[], int n)
{
   int low=0, mid=0, high=n-1;

   while (mid <= high)
   {
       switch (a[mid])
       {
       case 0 : swap(a[low] , a[mid]);
       mid++;
       low ++;
        break;

        case 1 : mid++;
        break;

       case 2 : swap(a[mid] , a[high]);
       high--;
        break;
       
       default:
        break;
       }
   }
   

}

int main()
{
    int a[] = {0,2,1,2,0,0,1,1,2,0};
    int n = 10;

    Sort012(a , n);

    for(auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}