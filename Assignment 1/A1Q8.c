#include<stdio.h>
#include<conio.h>
void main()
{
  int hour,min,day;
  float a,b,c;
  a=31558150/60;
  b=a/60;
  day=b/24;
  c=b/24-day;
  hour=c*24;
  a=c*24-hour;
  min=a*60;
  printf("A period of revolution of earth is %d days, %d hours and %d minutes",day,hour,min);
}