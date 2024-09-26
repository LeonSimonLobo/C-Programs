//Program to print alphabets in increasing order
#include<stdio.h>
#include<conio.h>
void main()
{
  char i;
  int n=1,j;
  while(i!='F')
  {
    i='A';
    j=n;
    while(j>0)
    {
	printf("%c",i);
	j--;
	i++;
    }
    printf("\n");
    n++;
  }
}