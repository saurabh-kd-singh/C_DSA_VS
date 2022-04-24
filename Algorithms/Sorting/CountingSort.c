#include<stdio.h>
#include<stdlib.h>

void CountingSort(int a[], int length, int range);

int main()
{
    int n, range;
    int* a;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    printf("Enter the range of elements in the array : ");
    scanf("%d",&range);


    a = (int *)malloc(n * sizeof(int));

    printf("\nEnter the elements one by one :\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    CountingSort(a , n, range);

    
    return 0;
}

void CountingSort(int a[], int length, int range)
{
    int c[range];

    //Intializing the Temporary storage array to 0.
    for (int i = 0; i < range; i++)
    {
        c[i] = 0;
    }
    
    //Counting the number of times an element has occurred 
    //in main array a and storing it's count in array c.
    for (int i = 0; i < length; i++)
    {
        c[a[i]] = c[a[i]] + 1;
    }
   

    //Finding the cumulative frequency of array c.
    //To know how many elements are less than or equal to the i element.
    for (int i = 1; i <= range; i++)
    {
        c[i] = c[i] + c[i-1];
    }
     
     
    int b[length];
    for (int i=(length-1); i>=0; i--)
    {
        b[c[a[i]]-1] = a[i];
        c[a[i]] = c[a[i]] - 1;
    }
    for(int i=0; i<length; i++)
    {
        printf("%d ",b[i]); 
    }
    
}
