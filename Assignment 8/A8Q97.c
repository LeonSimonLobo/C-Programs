//program to count number of vowels in a string using pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[100],*sptr;
  int vowel=0,i=0;
  printf("Enter string:");
  gets(s);
  sptr=s;
  while(*(sptr+i)!='\0')
  {
    switch(*(sptr+i))
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':vowel++;
    }
    i++;
  }
  printf("Number of vowels in given string is=%d",vowel);
}