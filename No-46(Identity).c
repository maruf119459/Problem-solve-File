#include<stdio.h>
int main()
{
    int i,j,row,col;
    scanf("%d%d",&row,&col);
    int s[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&s[i][j]);
    }
    if(i==j)
    {
       int ans=1;
       for(i=0;i<row;i++)
       {
           for(j=0;j<col;j++)
           {
               if(i==j)
               {
                   if(s[i][j]!=1)
                    ans=0;
                   continue;
               }
               if(s[i][j]!=0)
                ans=0;
           }
       }
       if(ans==1)
        printf("Indentity\n");
       else
        printf("Not Indentity\n");
    }
    else
        printf("Not Indentity\n");
    return 0;
}
