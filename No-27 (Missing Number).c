#include<stdio.h>
int main()
{
    int T,i,s,a,b,c,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
        {scanf("%d%d%d%d",&s,&a,&b,&c);
        k=s-(a+b+c);
    printf("%d\n",k);}
    return 0;
}
