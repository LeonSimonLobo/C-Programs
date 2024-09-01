#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,n;
  printf("Enter 1 for addition \nEnter 2 for subtraction \nEnter 3 for multiplication \nEnter 4 for division:");
  scanf("%d",&n);
  switch(n)
  {
    case 1:printf("Enter two numbers for addition:");
           scanf("%d%d",&a,&n);
           b=n+a;
           printf("%d+%d=%d",a,n,b);       
           break;
    case 2:printf("Enter two numbers for subtraction:");
           scanf("%d%d",&a,&n);
           b=a-n;
           printf("%d-%d=%d",a,n,b);  
           break;
    case 3:printf("Enter two numbers for multiplication:");
           scanf("%d%d",&a,&n);
           b=n*a;
           printf("%dx%d=%d",a,n,b);  
           break;
    case 4:printf("Enter two numbers for division:");
           scanf("%d%d",&a,&n);
           b=a/n;
           printf("%d/%d=%d",a,n,b);  
           break;
    default:printf("Action not included");
            break;
  }
}