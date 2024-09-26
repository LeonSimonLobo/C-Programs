//Program to read 2 arrays of 10 integers and store addition of those arrays into third
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],b[10],c[10];
  printf("Enter list of 10 integers for array 'a':");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter list of 10 integers of array 'b':");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&b[i]);
  }
  printf("Addition of arrays 'a' and 'b' are:\n");
  for(int i=0;i<10;i++)
  {
    c[i]=a[i]+b[i];
    printf("(%d)+(%d)=(%d) ",a[i],b[i],c[i]);
  }
}