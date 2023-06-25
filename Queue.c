#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int front =0;
int rear = -1;
int c=0;

int isEmpty()
{
    if(c==0)
    return 1;
    
    else
    return 0;
}
int isFull()
{
    if(c==MAX)
    return 1;
    
    else
    return 0;
}
void push(int data)
{
    if(isFull(a))
    printf("Queue Overflown \n");
    
    else
    {
        a[++rear] = data;
        c++;
    }
}
int pop()
{
    if(isEmpty(a))
    printf("Queue Underflown");
    
    else
    {
        int data = a[front++];
        c--;
        return data;
    }
    return -1;
}
int main()
{
    push(2);
    push(3);
    push(5);
    push(7);
    push(8);
    printf("\nElement in Queue\n");
    for(int i=0;i<MAX;i++)
    {
        printf("%d, ",a[i]);
    }
    pop();
    pop();
    printf("\nUpdated Queue\n");
    for(int i=0;i<c;i++)
    {
        printf("%d, ",a[i]);
    }
    // while(!isEmpty(a))
    // {
    //     int d = pop();
    //     printf("%d, ",d);
    // }
}
