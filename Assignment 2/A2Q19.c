#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b,c='A',d='B';
  printf("Enter a character:");
  scanf("%c",&a);
  b=(a>96) ? (a<123 ? c:d):d;
  switch(b)
  {
    case 'A':printf("%c is a small case letter",a);
           break;
    case 'B':printf("%c is not a small case letter",a);
  }
}