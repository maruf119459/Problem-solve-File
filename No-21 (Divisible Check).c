#include<stdio.h>
int main()
{
    int f,s;
    printf("Enter the first number: ");
    scanf("%d",&f);
    printf("Enter the second number: ");
    scanf("%d",&s);
    if(f%s==0)
    {
        printf("The first number is divisible by the second number.");
    }
    else if(s%f==0)
    {
        printf("The second number is divisible by the first number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
    return 0;
}

