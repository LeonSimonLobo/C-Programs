#include<stdio.h>
#include<conio.h>
void main()
{
  int hour,min,sec;
  printf("Enter the time in hours, minutes and seconds:");
  scanf("%d%d%d",&hour,&min,&sec);
  sec=hour*3600+min*60+sec;
  printf("Total seconds are %d",sec);
}