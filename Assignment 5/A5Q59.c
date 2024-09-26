//Program to read two arrays of 10 integers and swap values of these arrays
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],b[10];
  printf("Enter list of 10 integers of array 'A':");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter list of 10 integers of array 'B':");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&b[i]);
  }
  printf("\nA:");
  for(int i=0;i<10;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\nB:");
  for(int i=0;i<10;i++)
  {
    printf("%d\t",b[i]);
  }
  printf("\nAfter Swapping,");
  for(int temp,i=0;i<10;i++)
  {
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
  }
  printf("\nA:");
  for(int i=0;i<10;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\nB:");
  for(int i=0;i<10;i++)
  {
    printf("%d\t",b[i]);
  }
}