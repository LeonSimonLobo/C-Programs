#include<stdio.h>
#include<conio.h>
void main()
{
  float n,comm;
  printf("Enter sales amount:");
  scanf("%f",&n);
  if(n<=500)
  {
    comm=n/20;
  }
  else if(n>500&&n<=2000)
  {
    n=n-500;
    comm=35+n/10;
  }
  else if(n>2000&&n<=5000)
  {
    n=n-2000;
    comm=185+n*3/25;
  } 
  else 
  {
    comm=n*12.5/100;
  }
  printf("The commision is %fRs",comm);
}