//Program to perform various functions using string
#include<stdio.h>
#include<conio.h>

int strlen1(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}

void strcpy1(char *s,char *t)
{
    *s=*t;
    if(*t=='\0')
        return;
    while(*t!='\0')
    {
        s++;
        t++;
        *s=*t;
    }
}

int strcmp1(char *s, char *t)
{
    if(*s=='\0'||*t=='\0')
    {
        if((*s-*t)>0)
            return 1;
        return -1;
    }
    if(*s==*t)
    {
        strcmp1(s+1,t+1);
    }
    else
    {
        if(*s>*t)
            return 1;
        return -1;
    }
}

void strcat1(char *s, char *t)
{
    int num=strlen1(s);
    int length=strlen1(t);
    for(int i=0;i<length;i++)
    {
        *(s+num+i)=*(t+i);
    }
    *(s+num+length)='\0';
    printf("%s",s);
}

void reverse(char *s)
{
    if(*s=='\0')
        ;
    else
    {
        reverse(s+1);
        printf("%c",*s);
    }
}

int main()
{
    char s[100];
    char cmp[100];
    printf("Input string\n");
    gets(s);
    printf("\n");
    char arr[100];

    printf("Using strcpy\n");
    strcpy1(arr,s);
    puts(arr);
    printf("\n");

    printf("Using strcmp\n");
    printf("Enter the string you want to compare with\n");
    gets(cmp);
    printf("%d\n",strcmp1(cmp,s));
    printf("\n");

    printf("Using strcat\n");
    printf("Enter the string you want to concatenate with\n");
    char conc[100];
    gets(conc);
    strcat1(conc,s);
    printf("\n");
    printf("\n");

    printf("Reversing the string\n");
    reverse(s);
}
