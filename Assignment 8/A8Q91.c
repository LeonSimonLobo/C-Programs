//Program to calculate square and cube of a number using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,*nptr;
  printf("Enter a number:");
  scanf("%d",&n);
  nptr=&n;
  printf("Square of given number=%d",(*nptr)*(*nptr));
  printf("\nCube of given number=%d",(*nptr)*(*nptr)*(*nptr));
}