#include<stdio.h>
int main()
{
    int x,y,z;
    printf("A = ");
    scanf("%d",&x);
    printf("B = ");
    scanf("%d",&y);
    printf("C = ");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("A is bigger");
    }
    else if(y>z && y>x)
    {
        printf("B is bigger");
    }
    else if(z>x && z>y)
    {
        printf("C is bigger");
    }
    else if(x==y && x>z)
    {
        printf("A and B both are bigger");
    }
    else if(x==z && x>y)
    {
        printf("A and C both are biggere");
    }
    else if(z==y && z>x)
    {
        printf("B and C both are bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}
