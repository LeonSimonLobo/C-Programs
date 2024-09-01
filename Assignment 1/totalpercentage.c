#include<stdio.h>
#include<conio.h>
void main()
{
  float per,sub1,sub2,sub3,sub4,sub5,total;
  printf("Enter marks of 5 Subjects out of 100:");
  scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
  total=sub1+sub2+sub3+sub4+sub5;
  per=total/5;
  printf("total percentage is %f",per);  
}
