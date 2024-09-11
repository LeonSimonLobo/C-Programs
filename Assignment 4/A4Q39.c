#include<stdio.h>
#include<conio.h>
void main()
{
  float sum=0,count=1,fact=1,a,n;
  int num=1;
  printf("Enter a positive integer:");
  scanf("%f",&n);
  while(count<=n)
  {
    fact=1;
    a=count;
    while(a>1)
    {
      fact=a*fact;
      a--;
    }
    sum=sum+count/fact; 
    if(count!=n)
    {
      printf("%d/(%d!)+",num,num);
    }
    else
    {
      printf("%d/(%d!)=%f",num,num,sum);
    }
    count++;
    num++;
  }
}