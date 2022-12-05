#include<stdio.h>
int main()
{
    int N,K,i,count=0,RUN;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&RUN);
        if(RUN<K)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
