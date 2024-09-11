#include<stdio.h>
#include<conio.h>
void main()
{
  float n,rate;
  printf("Enter consumption in units:");
  scanf("%f",&n);
  if(n<=200)
  {
    rate=n/2;
  }
  else if(n>200&&n<=400)
  {
    n=n-200;
    rate=100+n*0.65;
  }
  else if(n>400&&n<=600)
  {
    n=n-400;
    rate=230+n*0.8;
  } 
  else 
  {
    n=n-600;
    rate=425+n*1.25;
  }
  printf("The rate is Rs.%f",rate);
}