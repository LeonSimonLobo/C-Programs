//Program to read an array of 10 integers and count total no. of odd and even elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],even=0,odd=0;
  printf("Enter 10 integers to find no. of even and odd among them:");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
	even++;
    }
    else
    {
	odd++;
    }
  }
  printf("The total number of odd elements are:%d \nThe total number of even elements are:%d",odd,even);
}