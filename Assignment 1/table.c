#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c=1;
  printf("Enter any positive integer:");
  scanf("%d",&a);
  while (c<=10)
  {
  b=a*c;
  printf("%dx%d=%d \n",a,c,b);
  c++;
  }
}