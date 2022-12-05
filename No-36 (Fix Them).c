#include<stdio.h>
int main()
{
int a[15],i;
a[0]=1;
for(i=1;i<15;i++)
{
a[i]=2*a[i-1];
}
for(i=0;i<15;i++)
{
printf("%d, ",a[i]);
}

}
