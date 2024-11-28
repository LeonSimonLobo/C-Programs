#include<stdio.h>
int main()
{
    int a,b,k,M,N,result;
    printf("Enter the Number of times You want to do Operation\n");
    scanf("%d",&M);
    while(M<=0||M>=100000)
    {
        printf("Invalid Input\n Enter another value of Number of Operation\n");
        scanf("%d",&M);
    }

    printf("Enter the number of jars you have (Must be more than 3):\n");
    scanf("%d",&N);
    while(N<3||N>=10000000)
    {
        printf("Invalid Input\n Enter another value of Number of jar\n");
        scanf("%d",&N);
    }

    int jar[N];
    for(int i=0;i<N;i++)
    {
        jar[i]=0;
    }
    printf("Enter a,b as inclusive jar index(Starting with 1) and k as the number"
    "of candy respectively:\n");

    while(M!=0)
    {
        scanf("%d%d%d",&a,&b,&k);

        while(k<0||k>=1000000)
        {
            printf("Invalid Input\n Enter another value of k\n");
            scanf("%d",&k);
        }
        while(a>N||a<0)
        {
            printf("Invalid Input\n Enter another value of a\n");
            scanf("%d",&a);
        }
        while(b>N||b>a)
        {
            printf("Invalid Input\n Enter another value of b\n");
            scanf("%d",&b);
        }
        int i=a;
        for(;i<=b;i++)
        {
            jar[i-1]+=k;
        }
        M--;
    }

    for(int i=0;i<N;i++)
    {
        result+=jar[i];
    }
    result/=N;
    printf("The Average : %d\n",result);
    return 0;
}