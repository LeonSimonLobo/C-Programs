#include<stdio.h>
#include<conio.h>
void main()
{  
  int sub1,sub2,sub3,sub4,sub5,marks;
  printf("Enter marks of 5 subjects out of 100 each:");
  scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  marks=sub1+sub2+sub3+sub4+sub5;
  if(marks<=500&&marks>=0)
  {
    marks=marks%50;
    switch(marks)
    {
      case 10:
      case 9:
      case 8:printf("A division");
             break;
      case 7:printf("B division");
             break;
      case 6:printf("C divison");
             break;
      default:printf("D division");
             break;
    }
  }
  else
  {
    printf("Marks not applicable");
  }
}
