//Program to read a 3*3 matrix and print its transpose
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,c,temp,n=0;
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
  printf("Transpose of matrix is:\n");
  for(int i=0;i<r-1;i++)
  {
    for(int j=n;j<c;j++)
    {
      temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
    n++;
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
}