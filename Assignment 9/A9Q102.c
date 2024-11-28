//Program to count number of characters, words and lines in a text file
#include<stdio.h>
#include<conio.h>
void main()
{
  char read;
  int ch=0,word=0,line=0;
  FILE *fptr;
  fptr=fopen("LNMIITSTUDENT.DAT","r");
  while((read=fgetc(fptr))!=EOF)
  {
    if(read=='\n')
    {
      line++;
    }
    if(read==' '||read=='\n')
    {
      word++;
    }
    if(read!='\0'&&read!='\n'&&read!=' ')
    {
      ch++;
    }
  }
  fclose(fptr);
  printf("There is/are %d character(s), is/are %d word(s) and %d line(s) in file 'LNMIITSTUDENT.DAT'",ch,word+1,line+1);
}