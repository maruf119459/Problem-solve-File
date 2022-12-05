#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[21];
    scanf("%s",s);
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='*') ans+=(a*b);
        else ans+=(a+b);
    }
    printf("%d\n",ans);
    return 0;
}

