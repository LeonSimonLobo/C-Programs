//Program to find length of a string including and excluding spaces
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[100],*sptr;
  int space=0,count=0;
  printf("Enter string:");
  gets(s);
  sptr=s;
  while(*(sptr++)!='\0')
  {
    count++;
    if(*sptr==' ')
    space++;
  }
  printf("Length of string with space=%d",count);
  printf("\nLength of string without space=%d",(count-space));
}