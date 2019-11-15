#include<stdio.h>
void main()    
{
    int node,edge,i,mat[100][100],n,start,end,j;
    printf("number of nodes:");
    scanf("%d",&node);
    printf("Number of edges:");
    scanf("%d",&edge);
    for(i=0;i<edge;i++)
    {
        
        printf("start:");
        scanf("%d",&start);
        printf("END:");
        scanf("%d",&end);
        mat[start][end]=1;
        mat[end][start]=1;
    }
    printf("\nRESULTANT MATRIX IS:__\n\n");

    for(i=0;i<edge;i++)
    {
        for(j=0;j<edge;j++)
            {
                printf("%d\t",mat[i][j]);
            }
        printf("\n");
    }
}

