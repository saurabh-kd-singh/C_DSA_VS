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

    for(int i=1; i<n; i++){
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    printf("\nIteration[%d] :: ",i);
    for(int k=0;  k<n; k++){
        printf("%d ",a[k]);

    }
    }

   

    return 0;
}
