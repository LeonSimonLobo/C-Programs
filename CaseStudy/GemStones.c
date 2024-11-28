//Gem Stones
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    int N,count=0;
    printf("Enter number of rocks: ");
    scanf("%d",&N);
    while(N<1||N>100) 
    {
        printf("Invalid no. of rocks, it must be between 1 and 100.\nEnter again: ");
        scanf("%d",&N);
    }
    char *rocks[N];
    printf("\nEnter elements (only lowercase letters 'a' to 'z'):\n");
    for (int i=0;i<N;i++) 
    {
        char ins[100];
        scanf("%s",ins);
        int flag=1;
        for(int j=0;j<strlen(ins);j++) 
        {
            if(ins[j]<'a'||ins[j]>'z') 
            {
                printf("Invalid element in rock. Elements must be between 'a' and 'z'.\n");
                flag=0;
                break;
            }
        }
        if(!flag) 
        {
            i--;
            continue;
        }
        rocks[i]=(char *)malloc(strlen(ins)+1);
        strcpy(rocks[i],ins);
    }
    int e_count[26]={0};
    for(int i=0;i<N;i++) 
    {
        int visit[26]={0};

        for(int j=0;j<strlen(rocks[i]);j++) 
        {
            int index=rocks[i][j]-'a';
            if(!visit[index]) 
            {
                e_count[index]++;
                visit[index] = 1;
            }
        }
    }
    for(int i=0;i<26;i++) 
    {
        if(e_count[i]==N) 
        {
            count++;
        }
    }
    printf("\nNumber of gem-elements: %d\n", count);
    for(int i=0;i<N;i++) 
    {
        free(rocks[i]);
    }
    return 0;
}