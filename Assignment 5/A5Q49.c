//Program to print * in a pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=0,j,i;
  while(n<5)
  {
    j=n;
    for(int m=5;m>n;m--)
    {
    printf(" ");
    }
    while(j>0)
    {
      printf("*");
      j--;
    }
    printf("*");
    printf("\n");
    n++;
  }
}