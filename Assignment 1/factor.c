#include<stdio.h>
#include<conio.h>
void main()
{  
  int c=1,n;
  printf("Enter a positive integer:");
  scanf("%d",&n);
  printf("\nFactors of %d=",n);
  while(c<=n)
  {
    if(n%c==0)
    {
      printf("%d,",c);
    }
    c++;
  }
}