//Program to print numbers in increasing order 
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=1,j,i;
  while(i!=6)
  {
    i=1;
    j=n;
    for(int m=5;m>n;m--)
    {
    printf(" ");
    }
    while(j>0)
    {
	printf("%d",i);
	j--;
	i++;
    }
    printf("\n");
    n++;
  }
}