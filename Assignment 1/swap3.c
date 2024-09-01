#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  c=b;
  b=a;
  a=c;
  printf("The two numbers swapped are:%d %d",a,b);
}