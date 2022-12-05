#include<stdio.h>
#include<string.h>
int main()
{
    char s[10002],t[10002];
    int i;
    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);
    int len=strlen(s)-1;
    int ans;
    for(i=0; i<len; i++)
    {
        if(s[i]<t[i])
            ans=1;
        else if(s[i]>t[i])
            ans=0;
    }
    if(ans==1)
        printf("\n %s \n %s",s,t);
    else if(ans==0)
        printf("\n %s \n %s",t,s);
    return 0;
}

