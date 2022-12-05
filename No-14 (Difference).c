#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y,a,c;
    scanf("%d%d",&x,&y);
    a=x-y;
    c=abs(a);
    printf("%d",c);
    return 0;
}
