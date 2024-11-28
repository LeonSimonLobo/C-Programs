//Program to find biggest of given list of integers using pointers
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *aptr,n,big;
  printf("Enter no. of elements of array:");
  scanf("%d",&n);
  int a[n];
  aptr=a;
  aptr=(int*)malloc(n*sizeof(int));
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",(aptr+i));
  }
  big=*aptr;
  for(int i=0;i<n;i++)
  {
    if(*(aptr+i)>big)
    big=*(aptr+i); 
  }
  printf("Biggest of given list is:%d",big);
}