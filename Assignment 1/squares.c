#include<stdio.h>
#include<conio.h>
void main()
{  
  int b=1,c,n;
  printf("Enter a number'N':");
  scanf("%d",&n);
  while(c<n)
  {
    c=b*b;
    printf("%d,",c);
    b++;
  } 
}