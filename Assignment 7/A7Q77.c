//Program to write a function to check whether a number is palindrome or not
#include<stdio.h>
#include<conio.h>
void palindrome(int n);
void main()
{
  int a;
  printf("Enter an integer:");
  scanf("%d",&a);
  palindrome(a);
}
void palindrome(int n)
{
  int num,m,sum=0;
  num=n;
  while(n>0)
  {
    m=n%10;
    sum=sum*10+m;
    n=n/10;
  }
  if(sum==num)
  {
    printf("\n%d is a palindrome.",num);
  }
  else
  {
    printf("\n%d is not a palindrome.",num);
  }
}