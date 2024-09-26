//Program to read an array of 10 integers and count total no. of positive, negative and zero elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],pos=0,neg=0,zero=0;
  printf("Enter 10 integers to find total no. of positive and non-positive elemnts:");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]>0)
    {
	pos++;
    }
    else if(a[i]<0)
    {
	neg++;
    }
    else
    {
	zero++;
    }
  }
  printf("Total no. of positive elements are:%d \nTotal no. of negative elements are:%d \nTotal no. of zero elements are:%d",pos,neg,zero);
}