#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  float x,y;
  printf("Enter value of 'n':");
  scanf("%d",&n);
  printf("\n For x=");
  scanf("%f",&x);
  if(n==1)
  {
   y=1+x;
  }
  else if(n==2)
  {
   y=1+x/n;
  }
  else if(n==3)
  {
   y=x;
   y=y*x;
   y=y*x;
   y=y+1;
  }
  else
  {
   y=1+n*x;
  }
  printf("y=%f",y);
}