#include<stdio.h>
int main()
{
    int n,D,i,ara[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int x=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]>x)
        {
            x=ara[i];
        }
    }
    for(i=0;i<n;i++)
    {
        D=x-ara[i];
        printf("%d ",D);
    }
    return 0;
}
