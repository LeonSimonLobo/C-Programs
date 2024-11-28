//Find Digits
#include <stdio.h>

int main() {
    int T;
    printf("Enter the number of numbers you want to enter:");
    scanf("%d",&T);
    if(T<1||T>15)
    {
      printf("\nInvalid value of T");
      printf("\nEnter another value:"); 
      scanf("%d",&T);
    }
    int num[T];
    int count[T];
    for (int i=0;i<T;i++)
    {
        count[i]=0;
    }
    for (int j=0;j<T;j++)
    {
        printf("\nEnter Number %d:",j + 1);
        scanf("%d",&num[j]);
        if(num[j]<=0||num[j]>=10000000000)
        {
          printf("\nInvalid value");
          printf("\nEnter another value:"); 
          scanf("%d",&num[j]);
        }
        int temp=num[j];
        while (temp!=0)
        {
            int digit=temp%10;
            if (digit!=0&&num[j]%digit==0)
            {
                count[j]++;
            }
            temp/=10;
        }
    }
    printf("Divisible digit count : ");
    for (int i=0;i<T;i++)
    {
        printf("%d\t",count[i]);
    }
    return 0;
}