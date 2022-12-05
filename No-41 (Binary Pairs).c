#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+2];
        scanf("%s",a);
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]=='0' && a[i+1]=='1') ans++;
            if(a[i]=='1' && a[i+1]=='0') ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
