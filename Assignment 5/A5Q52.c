//Program to print pascals triangle
#include<stdio.h>
#include<conio.h>
void main()
{
  int n=1,j,i,h;
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
    h=i-2;
    while(j<n-1)
    {
	printf("%d",h);
	j++;
	h--;
    }
    printf("\n");
    n++;
  }
}