//Bigger is Greater
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
  int t,temp;
  printf("Enter number of words:");
  scanf("%d",&t);
  while(t<1||t>100000)
  {
    printf("\nInvalid value of t");
    printf("\nEnter another value:");
    scanf("%d",&t);
  }
  char *w[t];
  memset(w,0,t*sizeof(char*));
  for(int i=t+1;i>0;i--)
  {
    char word[100];
    if(i!=t+1)
    {
      printf("\nEnter word:");
    } 
    gets(word);
    w[i]=malloc(strlen(word)+1);
    for(int a=0;a<strlen(word);a++)
    {
       word[a]=tolower(word[a]);
    }
    strcpy(w[i],word);
  }
  printf("\n");
  for(int i=t+1;i>0;i--)
  {
    for(int a=strlen(w[i])-1;a>=0;a--)
    {
      char s[100];
      strcpy(s,w[i]);
      if(a==0&&i!=t+1)
      {
        printf("no answer\n");
      }
      else if(s[a]>s[a-1])
      {
        temp=s[a];
        s[a]=s[a-1];
        s[a-1]=temp;
        a=-1;
        puts(s);
      }
    }
  }
}