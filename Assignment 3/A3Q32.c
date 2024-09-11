#include<stdio.h>
#include<conio.h>
void main()
{
  int n,N,max=-32768,max2,count=0,m;
  printf("Enter the number of numbers you would like to check:");
  scanf("%d",&N);
  printf("Enter %d integers:",N);
  while(count<N)
  {
    scanf("%d",&n);
    if(n>max)
    {
	max2=max;
	max=n;
    }
    if(n>max2&&n<max)
    {
	max2=n;
    }
    m=n;
    count++;
  }
  printf("Max among %d entered numers is:%d and second max is:%d",N,max,max2);
}