#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void Quicksort(int array[], int length);
void Quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    int n;
    int* array;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    array = (int *)malloc(n * sizeof(int));

    printf("\nEnter the elements one by one :\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]=",i);
        scanf("%d",&array[i]);
    }

    printf("\n");

    Quicksort(array,n);

    for(int i=0; i<n; i++)
    {
        printf("%d ",array[i]); 
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y =  temp;
}

void Quicksort(int array[], int length)
{
    Quicksort_recursion(array, 0, length-1);
}

//Quicksort_recusrion will apply the divide and conquer approach
//by dividing the array based on the pivot.
void Quicksort_recursion(int array[], int low, int high)
{
    if (low<high)
    {
        int pivot_index = partition(array, low, high);
        Quicksort_recursion(array, low, pivot_index-1);
        Quicksort_recursion(array, pivot_index+1, high);
    }    
}

int partition(int array[], int low, int high)
{
    int pivot_value = array[low];
    int i=low;
    int j=high+1;

    do
    {
        do
        {
            i++;
        } while (array[i] <= pivot_value);
        
        do
        {
            j--;
        } while (array[j] > pivot_value);
        
        if (i < j)
        {
            swap(&array[i], &array[j]);
        }
        
    }while (i<=j);
    
    swap(&array[low], &array[j]);

    return j;
}