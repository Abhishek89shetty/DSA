#include<stdio.h>
#define size 5
int stack_arr[size];
int top=-1;

void push(int data)
{
  if(top==size-1)
  {
    printf("stack is overflow");
    return;
  }
    top+=1;
  stack_arr[top]=data;
}

int display()
{
  for(int i=0;i<5;i++){
  printf(" %d ",stack_arr[i]);
  }
}
int main()
{
    push(3);
    push(2);
    push(6);
    push(99);
    push(8);
    display();
}