//Program modify value stored in other variable using pointer
#include <stdio.h>
int main()
{
    printf("Input value\n");
    int x;
    scanf("%d",&x);
    int *ptr=&x;
    printf("The initial value is %d\n",x);
    printf("Enter the modified value\n");
    scanf("%d",ptr);

    printf("The modified value is %d\n",x);
}