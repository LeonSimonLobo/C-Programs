#include<stdio.h>
#include<conio.h>
void main()
{
  int sec,min,hour,day;
  float a,b,c;
  printf("Enter the amount of seconds:");
  scanf("%d",&sec);
  a=sec/60;
  b=a/60;
  day=b/24;
  c=b/24-day;
  hour=c*24;
  a=c*24-hour;
  min=a*60;
  b=a*60-min;
  sec=b*60;
  printf("The total time is %d day(s), %d hour(s), %d minute(s) and %d second(s)",day,hour,min,sec);
}