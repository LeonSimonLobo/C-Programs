#include<stdio.h>
#include<conio.h>
void main()
{
  float CM,P,C,M,E;
  printf("Enter marks of Physics, Chemistry and Maths out of 200 respectively:");
  scanf("%f%f%f",&P,&C,&M);
  printf("Enter marks in entrance examinsation out of 100");
  scanf("%f",&E);
  CM=M/2+P/2+C/2+E;
  printf("Cut Off marks are:%f",CM);
}