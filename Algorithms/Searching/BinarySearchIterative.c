#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int* a;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));

    //requirement for binary search is Sorted array.
    printf("\nEnter the elements one by one in Sorted Order :\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    int search;

    printf("Enter the element you want to be searched : ");
    scanf("%d",&search);

    //**********************************************************

    int lb = 0, Ub = n-1;

    while(lb <= Ub){
        int mid = (lb + Ub)/2;

        if (a[mid] == search)
        {
            printf("Element Found");
            break;
        }
        else if(a[mid] < search)
        {
            lb = mid +1;
        }
        else
        {
            Ub = mid -1;
        }
    }

    return 0;
}
