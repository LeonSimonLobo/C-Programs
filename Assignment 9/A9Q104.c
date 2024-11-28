//Program with enumeration with color names can be used in a switch statement to display the hexadecimal color code
#include<stdio.h>
#include<conio.h>
enum code{White,Red,Blue,Yellow,Black};
void main()
{
  enum code color;
  printf("0 for white\n1 for red\n2 for blue\n3 for yellow\n4 for black\n");
  printf("Enter the color which you would like to know the code of:");
  scanf("%d",&color);
  switch(color)
  {
    case 0:printf("\nThe code is #FFFFFF");
           break;
    case 1:printf("\nThe code is #FF0000");
           break;
    case 2:printf("\nThe code is #0000FF");
           break;
    case 3:printf("\nThe code is #FFFF00");
           break;
    case 4:printf("\nThe code is #000000");
           break;
  }
}