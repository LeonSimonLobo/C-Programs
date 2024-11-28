//Program to count number of words in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[100],*sptr;
  int count=1;
  printf("Enter string:");
  gets(s);
  sptr=s;
  while(*(sptr++)!='\0')
  {
    if(*sptr==' ')
    count++;
  }
  printf("Number of words in given string is=%d",count);
}