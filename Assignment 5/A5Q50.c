//Program to print alphabets in increasing order
#include<stdio.h>
#include<conio.h>
void main()
{
  char i='A';
  int n=1,j;
  while(i!='F')
  {
    j=n;
    while(j>0)
    {
	printf("%c",i);
	j--;
    }
    printf("\n");
    n++;
    i++;
  }
}