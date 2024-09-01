#include<stdio.h>
#include<conio.h>
void main()
{  
  int n;
  printf("Enter a number 'N':");
  scanf("%d",&n);
  if(~n^n!=-1)
  {
    printf("%d is a palindrome",n);
  }
  else
  {
    printf("%d is not a palindrome",n);
  }
}