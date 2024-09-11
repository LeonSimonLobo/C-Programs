#include<stdio.h>
#include<conio.h>
void main()
{  
  int c=0,n;
  printf("Enter a number'N':");
  scanf("%d",&n);
  while(c<=n)
  {
    printf("%d,",c);
    c=c+2;
  } 
}