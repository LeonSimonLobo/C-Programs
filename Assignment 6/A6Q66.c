//Program to read two 3*3 matrix and add their value and store them in third matrix
#include<stdio.h>
#include<conio.h>
void main()
{
  int r1,c1,r2,c2;
  printf("Enter row and column value of a matrix:");
  scanf("%d%d",&r1,&c1);
  printf("Enter row and column value of b matrix:");
  scanf("%d%d",&r2,&c2);
  int a[r1][c1],b[r2][c2],c[r1][c2];
  if(c1!=r2)
  {
    printf("Matrices uncompatible for addition");
  }
  else
  {
    printf("Enter elements of a matrix:");
    for(int i=0;i<r1;i++)
    {
      for(int j=0;j<c1;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("Matrix a is:\n");
    for(int i=0;i<r1;i++)
    {
      for(int j=0;j<c1;j++)
      {
        printf("%d ",a[i][j]);
      }
      printf("\n");
    }
    printf("Enter elements of b matrix:");
    for(int i=0;i<r2;i++)
    {
      for(int j=0;j<c2;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    printf("Matrix b is:\n");
    for(int i=0;i<r2;i++)
    {
      for(int j=0;j<c2;j++)
      {
        printf("%d ",b[i][j]);
      }
      printf("\n");
    }
    printf("Addition of a and b matrices is:\n");
      for(int i=0;i<r1;i++)
    {
    for(int j=0;j<c2;j++)
      {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d ",c[i][j]);
      }
      printf("\n");
    }
  }
}