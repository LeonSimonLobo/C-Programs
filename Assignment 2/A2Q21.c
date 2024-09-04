#include<stdio.h>
#include<conio.h>
void main()
{
  char c;
  float x,y,n;
  printf("Enter 'a' for addition \nEnter 's' for subtraction \nEnter 'm' for multiplication \nEnter 'd' for division:");
  scanf("%c",&c);
  switch(c)
  {
    case 'a':printf("Enter two numbers for addition:");
           scanf("%f%f",&x,&n);
           y=n+x;
           printf("%f+%f=%f",x,n,y);       
           break;
    case 's':printf("Enter two numbers for subtraction:");
           scanf("%f%f",&x,&n);
           y=x-n;
           printf("%f-%f=%f",x,n,y);  
           break;
    case 'm':printf("Enter two numbers for multiplication:");
           scanf("%f%f",&x,&n);
           y=n*x;
           printf("%fx%f=%f",x,n,y);  
           break;
    case 'd':printf("Enter two numbers for division:");
           scanf("%f%f",&x,&n);
           y=x/n;
           printf("%f/%f=%f",x,n,y);  
           break;
    default:printf("Action not included");
            break;
  }
}