//Program to print * in reflected pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=1,j;
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
    while(j<n-1)
    {
	printf("*");
	j++;
    }
    printf("\n");
    n++;
  }
  n=n-2;
  while(n>0)
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
    while(j<n-1)
    {
	printf("*");
	j++;
    }
    printf("\n");
    n--;
  }
}