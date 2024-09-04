#include<stdio.h>
#include<conio.h>
void main()
{
  float base,b;
  int power,n;
  printf("Enter a base:");
  scanf("%f",&base);
  printf("Enter an integer exponent:");
  scanf("%d",&power);
  n=power;
  b=base;
  if(base==0 && power==0)
  {
    printf("0^0 is undefined");
  }
  else if(power==0)
  {
    printf("%f^0=1",base);
  }
  else if(power>0)
  {
    while(n!=1)
    {
	base=base*b;
	n--;
    }
    printf("%f^%d=%f",b,power,base);
  }
  else
  {
    while(n<=0)
    {
	base=base/b;
	n++;
    }
  printf("%f^(%d)=%f",b,power,base);
  }
}