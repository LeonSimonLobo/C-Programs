//Program to perform linear search on an array
#include<stdio.h>
#include<conio.h>
void main()
{
  int N,n,time=0;
  printf("Enter length of array:");
  scanf("%d",&N);
  printf("Enter array:",N);
  int a[N],pos[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter element to search:");
  scanf("%d",&n);
  for(int i=0;i<N;i++)
  {
    if(a[i]==n)
    {
      time++;
      pos[i]=i+1;
    }
    else
    {
      pos[i]=-1;
    }
  }
  if(time==0)
  {
    printf("Element not found in array");
  }
  else
  {
    printf("%d is found in array %d times at positions:",n,time);
    for(int i=0;i<N;i++)
    {
      if(pos[i]!=-1)
      {
	printf("%d ",pos[i]);
      }
    }
  }
}