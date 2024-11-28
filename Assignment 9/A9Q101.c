//Program to add/append information to the file “LNMIITSTUDENT.DAT”.
#include<stdio.h>
#include<conio.h>
void main()
{
  char a[100];
  printf("Enter a string:");
  gets(a);
  FILE *fptr;
  fptr=fopen("LNMIITSTUDENT.DAT","a");
  fprintf(fptr,"%s",a);
}