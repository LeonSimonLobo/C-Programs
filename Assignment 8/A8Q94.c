//Program to copy string in reverse order to another string
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  int i=0;
  char *s1ptr,*s2ptr;
  s1ptr=(char*)malloc(10*sizeof(char));
  s2ptr=(char*)malloc(10*sizeof(char));
  printf("Enter a string:");
  gets(s1ptr);
  while(*(s1ptr+i)!='\0')
  {
    *(s2ptr+i)=*(s1ptr+strlen(s1ptr)-i-1);
    i++;
  }
  *(s2ptr+i)='\0';
  printf("String reversed is:");
  puts(s2ptr);
}