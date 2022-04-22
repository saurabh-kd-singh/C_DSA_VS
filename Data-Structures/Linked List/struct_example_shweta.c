// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node n1,n2;
struct node *n3;

int main() {
    // Write C code here
    printf("Hello world ");
    
    n1.data = 5;
    n1.next = &n2;
    
    n2.data = 10;
    n2.next = NULL;
    
    n3 = (struct node*)malloc(sizeof(struct node));
    n3 -> data = 15;
    printf("%d , %d", n3->data , (*n3).data);
    
    printf("%d ",n1.data);
    printf("%d ",*(n1.next));
    

    return 0;
}