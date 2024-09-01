#include<stdio.h>
#include<conio.h>
void main()
{
   float F,C;
   printf("Enter temperature in fahrenheit");
   scanf("%f",&F);
   F=F-32;
   C=F*5/9;
   printf("The temperature in centigrade is %f",C);
}