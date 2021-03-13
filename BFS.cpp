#include<iostream>
using namespace std;

int rear,front,i,j,k,m,n,v,que[10],visit[10],visited[10],Graph[10][10];

int main()
{

    cout<<"Enter number of vertex and Edges :"<<endl;
    cin>>n>>m;

    cout<<"Enter start and end point of each Edges :"<<endl;
    for(k=1;k<=m;k++)
    {
        cin>>i>>j;
        Graph[i][j]=1;
    }

    cout<<"Enter the initial vertex :"<<endl;
    cin>>v;

    cout<<"The vertex are :"<<endl;
    cout<<v<<" ";

    visited[v]=1;

    for(k=1;k<n;k++){
        for(j=1;j<=n;j++)
            if(Graph[v][j]!=0 && visit[j]!=1 && visited[j]!=1){
                visit[j]=1;
                que[rear]=j;
                rear++;
            }
            v = que[front++];
            cout<<v<<" ";
            visit[v]=0; visited[v]=1;
    }

    return 0;
}
