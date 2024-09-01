#include<stdio.h>
#include<conio.h>
void main()
{  
  float a,b,c;
  printf("Enter three numbers:");
  scanf("%f%f%f",&a,&b,&c);
  if(a>b)
  {
    if(a>=c)
    { 
      printf("Max is %f",a);
    }
    else
    {
      printf("Max is %f",c);
    }
  }
  else if (b>=c)
  {
    printf("Max is %f",b);
  }
  else
  {
    printf("Max is %f",c);
  }
}