//Program to write a function to generate first N fibonacci numbers
#include<stdio.h>
#include<conio.h>
void fib(int N);
void main()
{
  int n;
  printf("Enter number of terms of fibonnaci series:");
  scanf("%d",&n);
  fib(n);
}
void fib(int N)
{
  int n=0,f=1,d=1;
  printf("\nThe Fibonnaci Series upto %d terms is:0 1",N);
  while (N>2)
  {
   d=f;
   f=f+n;
   n=d;
   printf(" %d",f);
   N--;
  }
}