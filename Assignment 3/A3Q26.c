#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0,a=1,b=0;
  printf("Enter a positive integer 'N':");
  scanf("%d",&n);
  while(a<=n)
  {
   sum=sum+a;
   a=a+2;
  }
  printf("Sum of all odd numbers between 1 and N is:%d \n",sum);
  sum=sum^sum;
  while(b<=n)
  {
   sum=sum+b;
   b=b+2;
  }
  printf("Sum of all even numbers betweeb 1 and N is:%d",sum);
}