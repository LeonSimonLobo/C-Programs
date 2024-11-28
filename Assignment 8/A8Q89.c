//Program to copy one array in reverse into another array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *temp,*a1ptr,*a2ptr,n;
  printf("Enter no. of elements of array:");
  scanf("%d",&n);
  int a1[n],a2[n];
  a1ptr=a1;
  a1ptr=(int*)malloc(n*sizeof(int));
  a2ptr=a2;
  a2ptr=(int*)malloc(n*sizeof(int));
  temp=a2ptr;
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",(a1ptr++));
  }
  for(int i=0;i<n;i++)
  {
    *(temp++)=*(--a1ptr);
  }
  printf("Array is: ");
  for(int i=0;i<n;i++)
  {
    printf("%d ",*(a2ptr+i));
  }
  free(a1ptr);
  free(a2ptr);
}