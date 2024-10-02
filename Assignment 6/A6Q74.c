//Program to merge two sorted arrays into a third
#include<stdio.h>
#include<conio.h>
int sortarray(int N, int a[N]);
void main()
{
  int N1,N2,N3;
  printf("Enter length of array A:");
  scanf("%d",&N1);
  printf("\nEnter array A:",N1);
  int a[N1];
  for(int i=0;i<N1;i++)
  {
    scanf("%d",&a[i]);
  }
  a[N1]=sortarray(N1,a);	
  printf("\nEnter length of array B:");
  scanf("%d",&N2);
  printf("\nEnter array B:",N2);
  int b[N2];
  for(int i=0;i<N2;i++)
  {
    scanf("%d",&b[i]);
  }
  b[N2]=sortarray(N2,b);
  N3=N1+N2;
  int c[N3];
  for(int i=0;i<N1;i++)
  {
    c[i]=a[i];
  }
  for(int i=0;i<N2;i++)
  {
    c[i+N1]=b[i];
  }
  for(int j=0;j<N3;j++)
  {
    for(int i=0;i<N3;i++)
    {
      if(c[j]==c[i]&&j!=i)
      {
	c[i]=0;
        for(int k=i+1;k<N3;k++)
	{
	  c[k-1]=c[k];
	  c[k]=0;
	}
	i--;
	N3--;
      }
    }
  }
  printf("\nMerging both arrays into one");
  c[N3]=sortarray(N3,c);			
}
int sortarray(int N, int a[])
{
  int temp=0;
  for(int n=N;n>0;n--)
  {
    for(int i=0;i<n-1;i++)
    {	
      if(a[i]>a[i+1])
      {			
        temp=a[i];                      
        a[i]=a[i+1];                     
        a[i+1]=temp;
      }       		   				
    }
  }
  printf("\nSorted array is:");
  for(int i=0;i<N;i++)
  {
    printf("%d ",a[i]);
  }
  return a[N];
}