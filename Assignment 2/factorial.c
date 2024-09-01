#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b=1;
  printf("Enter any positive integer:");
  scanf("%d",&a);
  while (a>1)
  {
   b=a*b;
   a--;
  }
  printf("Factorial of given number is:%d",b);
}