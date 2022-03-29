#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int* a;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));

    printf("\nEnter the elements one by one :\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    for(int i=0; i<n-1; i++){
        int min=a[i];
        int k=i;

        for(int j=i+1; j<n; j++){
            if(a[j]<min){
                min = a[j];
                k=j;
            }
        }

        //Checking if the i th position has the minimum element or not. If not then Swap.
        if(k != i){
            int temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }

        //Printing Output.
        printf("Iteration[%d] :: ",i+1);
        for(int p=0; p<n; p++){
            printf("%d ",a[p]);
        }
        printf("\n");
    }

    return 0;
}
