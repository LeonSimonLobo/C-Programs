//Program to write a function to read character and check whether it is a vowel or not
#include<stdio.h>
#include<conio.h>
void vowel(char c);
void main()
{
  char a;
  printf("Enter a character:");
  scanf("%c",&a);
  vowel(a);
}
void vowel(char c)
{
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
  {
    printf("\n%c is a vowel",c);
  }  else
  {
    printf("\n%c is not a vowel",c);
  }
}