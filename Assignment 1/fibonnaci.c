#include<stdio.h>
#include<conio.h>
void main()
{  
  int t,n=0,f=1,d=1;
  printf("Enter the number of terms of Fibonnaci Series:");
  scanf("%d",&t);
  printf("The Fibonnaci Series upto %d terms is:0 1",t);
  while (t>2)
  {
   d=f;
   f=f+n;
   n=d;
   printf(" %d",f);
   t--;
  }
}