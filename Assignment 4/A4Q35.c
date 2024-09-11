#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0,m;
  printf("Enter an integer:");
  scanf("%d",&n);
  while(sum>=10||sum<=0)
  {
    sum=0;
    while(n>0)
    {
      m=n%10;
      sum=sum+m;
      n=n/10;
      if(n!=0)
      {
	printf("%d+",m);
      }
      else
      {
	printf("%d=%d \n",m,sum);
      }
    }
    n=sum;
  } 
}