#include<stdio.h>
#include<stdlib.h>

void mergesort(int a[], int length);
void mergesort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main()
{
    int n; int *a;
    printf("Enter the number of element in the array :");
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));

    printf("\nEnter the elements one by one : ");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    
    mergesort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}

void mergesort(int a[], int length)
{
    mergesort_recursion(a, 0, length-1);
}

void mergesort_recursion(int a[], int l, int r)
{
    if (l<r)
    {
        int m = l + (r-l)/2;
        mergesort_recursion(a, l, m);
        mergesort_recursion(a, m+1, r);

        merge_sorted_arrays(a, l, m , r);
    }
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int left_length = m-l+1;
    int right_length = r-m;

    int temp_left[left_length];
    int temp_right[right_length];

    for (int i = 0; i < left_length; i++)
    {
        temp_left[i] = a[l + i];
    }

    for (int i = 0; i < right_length; i++)
    {
        temp_right[i] = a[m + 1 + i];
    }

    for (int i=0 ,j=0 ,k=l; k<=r ; k++)
    {
        if( (i < left_length) && ( j >= right_length || temp_left[i] <= temp_right[j] ) )
        {
            a[k]=temp_left[i];
            i++;
        }
        else
        {
            a[k]=temp_right[j];
            j++;
        }
    }
    


    
}