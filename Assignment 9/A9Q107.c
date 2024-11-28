//Program to write a function to flip last n digits of a number
#include<stdio.h>
#include<conio.h>
int flip(int a,int b);
void main()
{
  int num,n;
  printf("Enter number and how many digits to flip:");
  scanf("%d%d",&num,&n);
  printf("The flipped number is:%d",flip(num,n));
}
int flip(int a,int b)
{
  int c,digit=0,m,sum1=0,sum2=0;
  c=a;
  for(int i=1;i<=b;i++)
  {
    m=c%10;
    sum1=sum1*10+m;
    c=c/10;
  }
  for(int i=a;i>0;i/=10)
  {
    digit++;
  }
  c=sum1;
  for(int i=1;i<=b;i++)
  {
    m=c%10;
    sum2=sum2*10+m;
    c=c/10;
  }
  c=a-sum2+sum1;
  return c;
}