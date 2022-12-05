#include<stdio.h>
int main()
{
    int n,i,x,x1,x2,x3,ara[102];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%%",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]>=80 && ara[i]<=100)
        {
            x=100-ara[i];
            x1=x*3;
            printf("%d minutes\n",x1);
        }
        else if(ara[i]>=60 && ara[i]<=79)
        {
            x=80-ara[i];
            x1=x*2;
            x2=x1+60;
            printf("%d minutes\n",x2);
        }
        else
        {
            x=60-ara[i];
            x1=x*1;
            x2=x1+40+60;
            printf("%d minutes\n",x2);
        }
    }
    return 0;
}
