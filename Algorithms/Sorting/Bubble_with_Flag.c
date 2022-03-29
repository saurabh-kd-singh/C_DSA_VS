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

    
    for(int j=0; j<n-1; j++){
       int f = 0;

        for(int i=0; i<n-j-1; i++){
            if(a[i] > a[i+1]){

                f=1;

                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        if(f == 0)
        {
            printf("\nIteration[%d] :: ",j+1);
            for(int k=0;  k<n; k++)
            {
                printf("%d ",a[k]);
            }
            break;
        }

        printf("\nIteration[%d] :: ",j+1);
        for(int k=0;  k<n; k++){
        printf("%d ",a[k]);
    } 
        

    }

    return 0;
}