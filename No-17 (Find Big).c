#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w>x && w>y && w>z)
    {
        printf("Largest = %d \n",w);
    }
    else if(x>w && x>y && x>z)
    {
        printf("Largest = %d \n",x);
    }
    else if(y>w && y>z && y>x)
    {
        printf("Largest = %d \n",y);
    }
    else
    {
        printf("Largest = %d \n",z);
    }

    if(w<x && w<y && w<z)
    {
        printf("Smallest = %d \n",w);
    }
    else if(x<y && x<z && x<w)
    {
        printf("Smallest = %d \n",x);
    }
    else if(y<x && y<w && y<z)
    {
        printf("Smallest = %d \n",y);
    }
    else
    {
        printf("Smallest = %d \n",z);
    }
 return 0;
}

