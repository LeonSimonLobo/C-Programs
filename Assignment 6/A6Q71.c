//Program to find the pivot element
#include<stdio.h>
#include<conio.h>
#include<unistd.h>
void main()
{
  int n,N,count,temp;
  printf("Enter length of array:");
  scanf("%d",&n);
  printf("\nEnter array:");
  int a[n],r[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int j=n;j>=0;j--)
  {
    for(int i=0;i<j;i++)
    {	
      if(a[i]>a[i+1])
      {			
        temp=a[i];                      
        a[i]=a[i+1];                     
        a[i+1]=temp;
      }       		   				
    }
  }				
  printf("\nArray in ascending order is:");
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\nEnter the number of positions to rotate array:");
  scanf("%d",&N);
  while(N>=n)
  {
    N=N-n;
  }
  for(int i=0;i<n;i++)
  {
    r[i]=a[i];
  }
  for(int i=0;i<n;i++)
  {
    count=N+i;
    while(count>=n)
    {
      count=count-n;
    }
    a[count]=r[i];
  }
  printf("\nSorted, rotated array is:");
  for(int i=0;i<n;i++)
  {
    printf(" %d",a[i]);
  }
  for(int i=1;i<n;i++)
  {
    if(a[i]<a[i-1])
    {
      temp=a[i];
      count=i;
      i=n;  
    } 
  }
  int b[count],c[n-count];
  sleep(2);
  printf("\nPivot element is %d",temp);
  sleep(1);
  printf("\nThe two monotonically increasing array are:");
  sleep(1);
  for(int i=0;i<count;i++)
  {
    b[i]=a[i];
    printf(" %d",b[i]);
  }
  printf("\nAnd:");
  for(int i=0;i<n-count;i++)
  {
    c[i]=a[count+i];
    printf(" %d",c[i]);
  }
}