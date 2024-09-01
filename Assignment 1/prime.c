#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b=1;
  printf("Enter a positive integer:");
  scanf("%d",&a);
  while(b<=a/2)
  {
   b++;	
   if(a%b==0&&a!=b)
   {
    printf("Given number is not prime");
    b=a+1;
   } 
  }
  if(b!=a+1)
  {
   printf("Given number is prime");
  }
}