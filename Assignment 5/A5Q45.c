//Program to guess a random number
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
  int num,random;
  printf("You have 5 tries to guess a random number picked between 1 and 100");
  srand(time(NULL));
  random=rand()%100+1;
  for(int i=1;i<6;i++)
  {
    printf("\nEnter guess:");
    scanf("%d",&num);
    if(num==random)
    {
      printf("\nCongratulations! You have found the number!");
      i=6;
    }
    else
    {
      printf("\nNope");
      if(num<random)
      {
	printf(", try higher");
      }
      if(num>random)
      {
	printf(", try lower");
      }
      printf("\nYou have %d tries left",5-i);
    }
    if(i==5)
    {
      printf("\nBetter luck next time!\nWould you like to play again?\n1 for yes\n2 for no");
      scanf("%d",&num);
      switch(num)
      {
        case 1:i=0;
                break;
	case 2:i=6;
		break;
      }  
    }
  }
}