#include<stdio.h>
#include<conio.h>
void main()
{  
  int n;
  scanf("%d",&n);
  n=~n^n;
  printf("%d",n);
}