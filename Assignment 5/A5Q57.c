//Program to raed N no.s and find out max and second max using array 
#include<stdio.h>
#include<conio.h>
void main()
{
  int N,max1,max2;
  printf("Enter number of numbers to check:");
  scanf("%d",&N);
  int a[N];
  printf("Enter list of numbers:");
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  max1=a[0];
  for(int i=1;i<N;i++)
  {
    if(a[i]>max1)
    {
      max2=max1;
      max1=a[i];
    }
    else if(a[i]>max2&&a[i]<max1)
    {
      max2=a[i];
    }
  }
  printf("Max=%d Second Max=%d",max1,max2);
}