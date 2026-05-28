#include<stdio.h>
#include<stdlib.h>
#define size 50

int stack_arr[size];
int top=-1;

int isfull()
{
  return top==size-1;
}

int isempty()
{
  return top==-1;
}
void push(int i)
{
    if(isfull())
    {
         printf("stack is overflow\n");
         return;
    }

  top=top+1;
  stack_arr[top]=i;
}

int pop()
{
  if(isempty())
  {
    printf("stack is underflolw\n");
    return 0;
  }
    int del=stack_arr[top];
    top=top-1;
    return del;
   
}

int dec2bin(int dec)
{
while(dec!=0)
{
  push(dec%2);
  dec=dec/2;
 }
}

void print()
{
    if(isempty())
  {
    printf("stack is underflolw\n");
   exit(1);

  }
while(!isempty())
{
    printf(" %d ",pop());

}
}

int main()
{
  int dec;
       printf("enter the decimal number:");
       scanf("%d",&dec);
       dec2bin(dec);
       print();


}