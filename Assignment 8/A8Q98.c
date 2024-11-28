//Program to find product of 2 matrix
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  int *m1[3],*m2[3],*m3[3];
  for(int i=0;i<3;i++)
  {
    m1[i]=(int*)malloc(3*sizeof(int));
    m2[i]=(int*)malloc(3*sizeof(int));
    m3[i]=(int*)malloc(3*sizeof(int));
  }
  printf("Enter the elements of matrix 1:");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      scanf("%d",(*(m1+i)+j));
      *(*(m3+i)+j)=0;
    }
  }
  printf("Matrix 1:\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",*(*(m1+i)+j));
    }
    printf("\n");
  }
  printf("Enter the elements of matrix 2:");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      scanf("%d",(*(m2+i)+j));
    }
  }
  printf("Matrix 2:\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",*(*(m2+i)+j));
    }
    printf("\n");

  }

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      *(*(m3+i)+j)=*(*(m3+i)+j)+(*(*(m1+i)+j))*(*(*(m2+j)+i));
    }
  }
  printf("\nMultiplication of 2 matrices are:\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",*(*(m3+i)+j));
    }
    printf("\n");
  }
}