#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int* a;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    a = (int *)malloc((n+1) * sizeof(int));

    printf("\nEnter the elements one by one :\n");
    for(int i=0; i<n; i++){
        printf("arr[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    int search;

    printf("Enter the element you want to be searched : ");
    scanf("%d",&search);
    a[n]=search;

    int k;
    for(int i=0; i<=n; i++){
        if(a[i] == search){
            k=i;
            break;
        }
    }
    if(k == n){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }

    return 0;
}
