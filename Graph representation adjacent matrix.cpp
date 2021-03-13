#include<bits/stdc++.h>
using namespace std;

int main()
{
    int GRAPH[100][100],V,E,start,end,i,j;

    printf("Enter The Number Of Vertex/Node....: \n");
    scanf("%d",&V);

    printf("Enter The Number OF Edges..: \n");
    scanf("%d",&E);

    printf("Enter the Origin & Then Destination For %d Times:\n",E);

    for(i=1;i<=E;i++){
        scanf("%d %d",&start,&end);
        GRAPH[start][end]=1;
    }
    printf("After Connection The Edges Graph Representation :\n");

    for(i=1;i<=V;i++){
        for(j=1;j<=V;j++)
            printf("%d ",GRAPH[i][j]);
        printf("\n");
    }

    return 0;
}

