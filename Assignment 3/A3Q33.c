#include<stdio.h>
#include<conio.h>
void main()
{
  int n,N,max,min,count=0,m;
  printf("Enter the number of numbers you would like to check:");
  scanf("%d",&N);
  printf("Enter %d integers:",N);
  while(count<N)
  {
    scanf("%d",&n);
    if(count==0)
    {
	max=n;
        min=n;
    }
    if(n>max)
    {
	max=n;
    }
    if(n<min)
    {
	min=n;
    }
    m=n;
    count++;
  }
  printf("Max among %d entered numers is:%d and min is:%d",N,max,min); 
}