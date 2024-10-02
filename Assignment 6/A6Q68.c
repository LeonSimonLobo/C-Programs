//Program to read a 3*3 matrix and multiply their value and store them in third matrix
#include<stdio.h>
#include<conio.h>
void main()
{
  int r1,c1,r2,c2;
  printf("Enter row and column value of a matrix:");
  scanf("%d%d",&r1,&c1);
  printf("Enter row and column value of b matrix:");
  scanf("%d%d",&r2,&c2);
  printf("Enter elements of a matrix:");
  int a[r1][c1],b[r2][c2],c[r1][c2];
  if(c1!=r2)
  {
    printf("Matrices uncompatible for multiplication");
  }
  else
  {
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
    for(int i=0;i<r2;i++)
    {
      for(int j=0;j<c2;j++)
      {
        c[i][j]=0;
      }
    }
    printf("Multiplication of a and b matrices is:\n");
    for(int i=0;i<r1;i++)
    {
      for(int j=0;j<c2;j++)
      {
        for(int k=0;k<c1;k++)
	{
	  c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
	printf("%d ",c[i][j]);
      }
      printf("\n");
    }
  }
}