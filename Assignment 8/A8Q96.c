//Program to sort given list of integers in ascending order using pointers
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *aptr,n,min,temp;
  printf("Enter no. of elements of array:");
  scanf("%d",&n);
  aptr=(int*)malloc(n*sizeof(int));
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",(aptr+i));
  }
  for(int j=0;j<n;j++)
  {
  temp=j;
  min=*(aptr+j);					
    for(int i=j+1;i<n;i++)
    {
      if(*(aptr+i)<min)
      {
	temp=i;
        min=*(aptr+i);
      }	
    } 
  *(aptr+temp)=*(aptr+j);
  *(aptr+j)=min;
  }
  printf("List in ascending order is: ");
  for(int j=0;j<n;j++)
  {
    printf("%d ",*(aptr+j));
  }
}