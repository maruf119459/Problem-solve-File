#include<stdio.h>
int main()
{
    int n,arr[15][15],i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
            for(j=1; j<=n; j++)
            {
                if(j==1)
                    arr[i][j]=i;
                else if(i==n)
                    arr[i][j]=n;
                else
                   arr[i][j]=j;


            }
    }


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i>1 && i<n && j>1 && j<n)
                printf(" ");
            else
            printf("%d",arr[i][j]);

        }
        printf("\n");
    }
    return 0;
}

