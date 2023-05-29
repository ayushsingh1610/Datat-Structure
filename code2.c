// Write a C program to check a stack is full or not using an array with push and pop operations.
#include<stdio.h>
#define SIZE 5
int st[SIZE] = {1,2,3,4,5};
int top = 4;
void push(int x)
{
    if(top == SIZE-1)
    printf("Stack overflown");
    
    top++;
    st[top]=x;

}
void pop()
{
    if(top == -1)
    printf("Stack is Empty");

    top--;
    int x = st[top];
}

void main()
{
    // push(5);
    pop();
    printf("\n%d",st[top]);
}