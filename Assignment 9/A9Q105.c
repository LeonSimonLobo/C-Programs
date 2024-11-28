//Program to print all permutations of a given string using pointers.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int fact(int a);
void main()
{
  int len,j;
  char a[5],temp;
  printf("Enter a string of maximum 5 characters:");
  gets(a);
  len=strlen(a);
  for(int i=1;i<=(fact(len)/(len-1));i++)
  {
    if(i>=len+1)
    {
      temp=a[1];
      a[1]=a[3];
      a[3]=temp;
      printf("%s ",a);
      for(j=0;j<len-2;j++)
      {
        temp=a[j];
        a[j]=a[j+1];
	a[j+1]=temp;
	printf("%s ",a);
      }
    }
    else
    {
      for(j=0;j<len-1;j++)
      {
        temp=a[j];
        a[j]=a[j+1];
	a[j+1]=temp;
	printf("%s ",a);
      }
    }
  }
}
int fact(int a)
{
  int factorial=1;
  for(int i=a;i>1;i--)
  {
    factorial=factorial*i;
  }
  return factorial;
}