//Program to write a function to return 1 if its argument is prime number and return zero otherwise
#include<stdio.h>
#include<conio.h>
int prime(int a);
void main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(prime(n))
  {
    printf("%d is a prime number",n);
  }
  else
  {
    printf("%d is not a prime number",n);
  }
}
int prime(int a)
{
  if(a==2)
  {
    return 1;
  }
  else
  {
    int b=1;
    while(b<=a/2)
    {
      b++;	
      if(a%b==0&&a!=b)
      {
	return 0;
      } 
    }
    if(b==a/2+1)
    {
      return 1;
    }
  }
}