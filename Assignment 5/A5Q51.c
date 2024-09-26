//Program to print 1 shifting right by one bit
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=1,j;
  while(n<6)
  {
    for(int i=1;i<6;i++)
    {
      if(i==n)
      {
	printf("1");
      }
      else
      {
	printf("0");
      } 
    }
    printf("\n");
    n++;
  }
}