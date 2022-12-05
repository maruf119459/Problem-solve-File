#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n");
    if(i==j)
    {
        int ans=1;
        int x=a[0][0];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=x)
                        ans=0;
                    continue;
                }
                if(a[i][j]!=0)
                    ans=0;
            }
        }
        if(ans==1)
        {
            printf("The Matrix is  Scalar\n");
            printf("\n");
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    printf("  %d  ",a[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("The Matrix is not Scalar\n");
            printf("\n");
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    printf("  %d  ",a[i][j]);
                }
                printf("\n");
            }
        }
    }
    else
    {
        printf("The Matrix is not Scalar\n");
        printf("\n");
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("   %d  ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
