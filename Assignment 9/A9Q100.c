//Program to read text file and count no. of vowels
#include<stdio.h>
#include<conio.h>
struct student
{
  int roll,marks;
  char name[25];
}info[25];
void main()
{
  int n;
  FILE *fptr;
  printf("Enter no. of students:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("Enter roll no.:");
    scanf("%d",&info[i].roll);
    printf("Enter total marks:");
    scanf("%d",&info[i].marks);
    printf("Enter name:");
    scanf("%s",info[i].name);
  }
  fptr=fopen("LNMIITSTUDENT.txt","w");
  fprintf(fptr,"Name\tRoll No.\tMarks\n");
  for(int i=0;i<n;i++)
  {
    fprintf(fptr,"\n");
  }
  fclose(fptr);
}