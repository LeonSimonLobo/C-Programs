#include<stdio.h>
#include<conio.h>
void main()
{  
  int n=0,sum=0;
  printf("Enter a list of numbers until a negative number:");
  while(n>=0)
  {
    scanf("%d",&n);
    if(n>=0)
    {
      sum=sum+n;
    }
  }
  printf("Sum of list of numbers=%d",sum);
}