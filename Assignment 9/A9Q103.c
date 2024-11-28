//Program to define macro to find biggest number of two given numbers
#include<stdio.h>
#include<conio.h>
#define MACRO x>y ? x:y
void main()
{
  int x,y;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  printf("Bigger of two numbers is:%d",MACRO);
}