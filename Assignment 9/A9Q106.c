//Program to create a structure named item that has members namely, item_name, quantity and amount 
#include<stdio.h>
#include<conio.h>
struct data
{
  char item_name[50];
  int quantity;
  int amount;
  int price;
}item;
int calc(int b, int c);
void main()
{
  printf("Enter item name:");
  scanf("%s",item.item_name);
  printf("Enter quantity:");
  scanf("%d",&item.quantity);
  printf("Enter price:");
  scanf("%d",&item.price);
  item.amount=calc(item.quantity,item.price);
  printf("Amount=%d",item.amount);
}
int calc(int b, int c)
{
  int d;
  d=b*c;
  return d;
}