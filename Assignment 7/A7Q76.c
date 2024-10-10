//Program to write a function to check whether a number is even or odd
#include<stdio.h>
#include<conio.h>
void parity(int a);
void main()
{
  int a;
  printf("Enter an integer:");
  scanf("%d",&a);
  parity(a);
}
void parity(int a)
{
  if(a%2==0)
  {
    printf("\n%d is an even number",a);
  }
  else
  {
    printf("\n%d is an odd number",a);
  }
}