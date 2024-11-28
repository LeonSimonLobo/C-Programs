//Program to declare a structure with data of employees
#include<stdio.h>
#include<conio.h>
struct data
{
  int num,pay;
  char name[25];
}employee[50];
void main()
{
  int N;
  printf("Enter no. of employees:");
  scanf("%d",&N);
  struct data *ptr;
  for(int i=0;i<N;i++)
  {
     printf("\nName:");
     scanf("%s",&employee[i].name);
     printf("Number:");
     scanf("%d",&employee[i].num);
     printf("Pay:");
     scanf("%d",&employee[i].pay);
  }
  ptr=employee;
  printf("Data of all employees:\n");
  printf("Emp No.\t\tName\t\t\tBasic Pay\n");
  printf("-------------------------------------------------\n");
  ptr=employee;
  for(int i=0;i<N;i++)
  {
    printf("%d\t\t%-20s\t%.2d\n",(ptr + i)->num,(ptr + i)->name,(ptr + i)->pay);
  }
}