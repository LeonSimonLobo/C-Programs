#include<stdio.h>
#include<conio.h>
void main()
{
  float P,R,T,A;
  printf("Enter Principal, Interest rate and amount of years:");
  scanf("%f%f%f",&P,&R,&T);
  A=P*R*T/100;
  printf("The Interest amount is %f",A);
}