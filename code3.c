#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int top=-1;

int isEmpty()
{
    if(top == -1)
    return 1;
    
    else
    return 0;
}
int isFull()
{
    if(top == MAX-1)
    return 1;
    
    else
    return 0;
}
void push(int data)
{
    if(isFull(a))
    printf("\nstack Overflown\n");
    
    else
    a[++top]=data;
}
int pop()
{
    if(isEmpty(a))
    {
        printf("\nStack underflow");
    }
    else
    {
    int data = a[top];
    printf("\nData poped = %d",data);
    top--;
    return data;
    }
    return -1;
}
int main()
{
    push(3);
    push(5);
    push(6);
    push(7);
    push(8);
    push(10);
    printf("Elemen in array\n");
    for(int i=0;i<MAX;i++)
    {
        printf("%d, ",a[i]);
    }
    pop();
    pop();
    printf("\n\nUpdated elements\n");
    for(int i=0;i<top+1;i++)
    {
        printf("%d, ",a[i]);
    }
}
