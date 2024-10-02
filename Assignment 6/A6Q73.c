//Program to read ballots, count votes cast for each candidate using an array. Also count spoilt ballots
#include<stdio.h>
#include<conio.h>
#include<unistd.h>
void main()
{
  int spoilt=0,vote,n,a[6];
  printf("Enter total no. of votes:");
  scanf("%d",&n);
  for(int i=0;i<6;i++)
  {
    a[i]=0;
  }
  for(int i=0;i<n;i++)
  {
    printf("\nTo vote for candidate1:- Enter 1");
    printf("\nTo vote for cabdidate2:- Enter 2");
    printf("\nTo vote for candidate3:- Enter 3");
    printf("\nTo vote for candidate4:- Enter 4");
    printf("\nTo vote for candidate5:- Enter 5");
    printf("\nEnter your vote:");
    scanf("%d",&vote);
    switch(vote)
    {
	case 1:a[1]++;
	       break;
	case 2:a[2]++;
	       break;
	case 3:a[3]++;
	       break;
	case 4:a[4]++;
	       break;
	case 5:a[5]++;
	       break;
	default:a[0]++;
	       break;
    }
  }
  for(int i=0;i<6;i++)
  {
    sleep(1);
    switch(i)
    {
	case 1:printf("\nThe number of votes for candidate1 is/are: %d",a[i]);
	       break;
	case 2:printf("\nThe number of votes for candidate2 is/are: %d",a[i]);
	       break;
	case 3:printf("\nThe number of votes for candidate3 is/are: %d",a[i]);
	       break;
	case 4:printf("\nThe number of votes for candidate4 is/are: %d",a[i]);
	       break;
	case 5:printf("\nThe number of votes for candidate5 is/are: %d",a[i]);
	       break;
	default:printf("\nThe number of spoilt ballots is/are: %d",a[i]);
	       break;
    }
  }
  for(int i=1;i<6;i++)
  {
    if(a[i]>n/2)
    {
	printf("\nThe candidate with the majority vote is candidate%d with %d votes!",i,a[i]);
    }
  }
}