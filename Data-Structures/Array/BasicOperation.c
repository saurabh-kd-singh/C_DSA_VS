#include<stdio.h>

int arr[100] ={1,2,3,4,5,6,7,8,9,10};

void Traverse(){
int i=0;

    while (arr[i])
    {
        printf("\na[%d]=%d",i,arr[i]);
        i++;
    }
}

void Insert(){}

void Search(){}

void Delete(){}

void main()
{
    int n;

    printf("What operatipn do you want to perform :\n");
    printf("1.Traversing\n 2.Insertion\n 3.Searching\n 4.Deleting");
    printf("\n");

    scanf("%d",&n);

    switch (n)
    {
    case 1:
        Traverse();
        break;
    
    case 2:
        Insert();
        break;

    case 3:
        Search();
        break;

    case 4:
        Delete();
        break;

    default:
        break;
    }

}




