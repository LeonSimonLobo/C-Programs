//Program to write a function to interchange the values of two variables
#include<stdio.h>
#include<conio.h>
int x,y;
void swap();
void main()
{
  printf("Enter two integers:");
  scanf("%d%d",&x,&y);
  swap();
  printf("The swapped values are:%d,%d",x,y);
}
void swap()
{
  x=x^y;
  y=x^y;
  x=x^y;
}