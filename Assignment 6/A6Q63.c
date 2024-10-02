//Program to read a 3*3 matrix and find out max and min element
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,c,max,min;
  printf("Enter row and column value of matrix:");
  scanf("%d%d",&r,&c);
  printf("Enter elements of matrix:");
  int a[r][c];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("Matrix is:\n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  max=a[0][0];
  min=a[0][0];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(a[i][j]>max)
      {
	max=a[i][j];
      }
      if(a[i][j]<min)
      {
	min=a[i][j];
      }
    }
  }
  printf("Max element is:%d\nMin element is:%d",max,min);
}