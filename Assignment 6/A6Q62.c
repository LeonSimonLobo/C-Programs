//Program to reverse an array
#include<stdio.h>
#include<conio.h>
void main()
{
  int N,temp;
  printf("Enter length of array:");
  scanf("%d",&N);
  printf("Enter array:",N);
  int a[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<N/2;i++)
  {
    temp=a[i];
    a[i]=a[N-1-i];
    a[N-1-i]=temp;
  }
  printf("The reversed array is:");
  for(int i=0;i<N;i++)
  {
    printf("%d ",a[i]);
  }
}