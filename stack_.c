#include<stdio.h>
#define size 5
int top=-1;
int stack_arr[size];

int isfull()
{
    return top==size-1;
}

int isempty(){
    return top==-1;
}


void push(int data)
{
    if(isfull())
    {
        printf("stack overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

int pop()
{
    if(isempty())
    {
     printf("stack underflow");
     return 0;    
    }
    int del;
    del=stack_arr[top];
    top=top-1;
    return del;
}

void display()
{
    for(int i=0;i<size;i++)
    {
    printf("%d ",stack_arr[i]);
    }
}
int main()
{
    int data;
    push(55);
    push(56);
    push(0);
    push(55);
    push(9);
    
    display();
    
    printf("\n%d popped",data=pop());
    

}