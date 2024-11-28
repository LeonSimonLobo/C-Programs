//Program to read text file and count no. of vowels
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  int count=0;
  FILE *fptr;
  printf("Enter line in file:");
  fptr=fopen("vowel.txt","w");
  char ch;
  while((ch=getchar())!='\n')
  {
    putc(ch,fptr);
  }
  fclose(fptr);
  fptr=fopen("vowel.txt","r");
  while(feof(fptr)==0)
  {
    ch=getc(fptr);
    switch(tolower(ch)) 
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':count++;
    }
  }
  fclose(fptr);
  printf("Number of vowels in file are:%d",count);
}