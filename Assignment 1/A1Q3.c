#include<stdio.h>
#include<conio.h>
void main()
{
  int gross,sal,rent,other;
  printf("Enter basic salary, rent allowance and other allowances:");
  scanf("%d%d%d",&sal,&rent,&other);
  gross=sal+rent+other;
  printf("Gross salary is:%d",gross);
}