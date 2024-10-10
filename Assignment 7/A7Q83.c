//Program to write a function to read an array and find out maximum
#include<stdio.h>
#include<conio.h>
int maxarr(int N, int a[]);
void main()
{
  int n,max;
  printf("Enter length of array:");
  scanf("%d",&n);
  int a[n];
  printf("Enter array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=maxarr(n,a);
  printf("Maximum in array is:%d",max);
}
int maxarr(int N, int a[])
{
  int max;
  max=a[0];
  for(int i=1;i<N;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
    }
  }
  return max;
}