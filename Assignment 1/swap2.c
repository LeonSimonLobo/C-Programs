#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  printf("Enter two positive integers:");
  scanf("%d%d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("The swapped numbers are:%d %d",a,b);
}