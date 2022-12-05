#include<stdio.h>
int main()
{
    long long int n;
    int sum=0,x;
    scanf("%lld",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("%d \n",sum);
    return 0;
}

