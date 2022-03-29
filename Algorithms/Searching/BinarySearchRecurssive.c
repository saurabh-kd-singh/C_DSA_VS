#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int a[], int lb, int ub, int search)
{
    if(lb <= ub){
        int mid = (lb + ub)/2;
        printf("\n%d",mid);

        if (a[mid] == search){
            return 1;
        }
        else if(a[mid] < search){
            return BinarySearch(a, mid+1, ub, search);
        }
        else{
            return BinarySearch(a,lb ,mid-1 , search);
        }
    }  
    return -1; 
}

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
    int lb = 0;
    int ub = n-1;

    int  result = BinarySearch(a, lb, ub, search);

    if(result == 1){
        printf("Element Found");
    }
    else{
        printf("Element Not Found");
    }

    return 0;
}