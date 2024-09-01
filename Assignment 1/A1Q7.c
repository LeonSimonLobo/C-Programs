#include<stdio.h>
#include<conio.h>
void main()
{
  float base,height,area;
  printf("Enter base and height of triangle respectively:");
  scanf("%f%f",&base,&height);
  area=0.5*base*height;
  printf("the area of triangle is:%f",area);
}