// Write a C program to implement a stack using an array with push and pop operations.
#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int x)
{
    if(top==SIZE-1)
    {
        printf("Stack overflown");
    }
    top++;
    stack[top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    top--;
    stack[top] = stack[top-1];
}

int main()
{
    push(1);
    push(2);
    push(4);
    push(9);
    push(16);
    printf("%d\n",top);

    pop();
    printf("\n%d\n",stack[top]);
    
    return 0;
}