//Program to read a 3*3 matrix and print sum of all rows
#include<stdio.h>
#include<conio.h>
void main()
{
  int r,c,sum=0;
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
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      printf("%d",a[i][j]);
      if(j!=c-1)
      {
	printf("+");
      }
      sum=sum+a[i][j];
    }
    printf("=%d",sum);
    printf("\n");
  }
}