#include<stdio.h>
int main()
{
    double x,y,a,TOTAL;
    char name;
    scanf("%s",&name);
    scanf("%lf%lf",&y,&x);
    a=x*(15.0/100);
    TOTAL=a+y;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
