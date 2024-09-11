#include<stdio.h>
#include<conio.h>
void main()
{
  int n,num,m,sum=0;
  printf("Enter an integer:");
  scanf("%d",&n);
  num=n;
  while(n>0)
  {
    m=n%10;
    sum=sum+m*m*m;
    n=n/10;
  }
  if(sum==num)
  {
    printf("%d is an Armstrong number.",num);
  }
  else
  {
    printf("%d is not an Armstrong number.",num);
  }
}