//Program to write a function to check whether a number is armstrong or not
#include<stdio.h>
#include<conio.h>
void armstrong(int n);
void main()
{
  int a;
  printf("Enter an integer:");
  scanf("%d",&a);
  armstrong(a);
}
void armstrong(int n)
{
  int num,m,sum=0;
  num=n;
  while(n>0)
  {
    m=n%10;
    sum=sum+m*m*m;
    n=n/10;
  }
  if(sum==num)
  {
    printf("\n%d is an Armstrong number.",num);
  }
  else
  {
    printf("\n%d is not an Armstrong number.",num);
  }
}