#include<stdio.h>
#include<conio.h>
void main()
{  
  char a;
  printf("Enter a character:");
  scanf("%c",&a);
  if(a>=65&&a<=90)
  {
    printf("Character %c is a capital letter",a);
  }
  else if(a>=48&&a<=57)
  {
    printf("Character %c is a digit",a);
  }
  else if(a>=97&&a<=122)
  {
    printf("Character %c is a small case letter",a);
  }
  else
  {
    printf("Character %c is a special symbol",a);
  }  
}