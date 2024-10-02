//Program to rotate an array by N positions
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,N,count;
  printf("Enter length of array:");
  scanf("%d",&n);
  int a[n],b[n];
  printf("\nEnter array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[i]=a[i];
  }
  printf("\nEnter the number of positions to rotate array:");
  scanf("%d",&N);
  printf("Original array is:");
  for(int i=0;i<n;i++)
  {
    printf(" %d",a[i]);
  }
  while(N>=n)
  {
    N=N-n;
  }
  for(int i=0;i<n;i++)
  {
    count=N+i;
    while(count>=n)
    {
      count=count-n;
    }
    a[count]=b[i];
  }
  printf("\nRotated array is:");
  for(int i=0;i<n;i++)
  {
    printf(" %d",a[i]);
  }
}