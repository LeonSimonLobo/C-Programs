//Program to sort(selection sort) an array
#include<stdio.h>
#include<conio.h>
void main()
{
  int N,min,temp;
  printf("Enter length of list:");
  scanf("%d",&N);
  printf("Enter list of %d integers:",N);
  int a[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int j=0;j<N;j++)
  {
  temp=j;
  min=a[j];					
    for(int i=j+1;i<N;i++)
    {
      if(a[i]<min)
      {
	temp=i;
        min=a[i];
      }	
    } 
  a[temp]=a[j];
  a[j]=min;
  }					
  printf("\nList in ascending order is:");
  for(int i=0;i<N;i++)
  {
    printf("%d ",a[i]);
  }					
}