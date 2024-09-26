//Program to read an array of 10 integers and print sum of numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],sum=0;
  printf("Enter 10 integers to sum:");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("Sum of 10 integers is:%d",sum);
}