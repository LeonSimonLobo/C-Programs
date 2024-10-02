//Program to sort(bubble sort) an array
#include<stdio.h>
#include<conio.h>
void main()
{
  int N,temp;
  printf("Enter length of list:");
  scanf("%d",&N);
  printf("Enter list of %d integers:",N);
  int a[N];
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int n=N;n>=0;n--)
  {
    for(int i=0;i<n;i++)
    {	
      if(a[i]>a[i+1])
      {			
        temp=a[i];                      
        a[i]=a[i+1];                     
        a[i+1]=temp;
      }       		   				
    }
  }
  printf("\nList in ascending order is:");
  for(int i=0;i<N;i++)
  {
    printf("%d ",a[i]);
  }					
}