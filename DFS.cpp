#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n,m,v,top=0,visit[10],visited[10],stk[10],GRAPH[10][10];

    cout<<"Enter the number of Vertex and Edges :"<<endl;
    cin>>n>>m;

    cout<<"Enter the start and end point of each Edges :"<<endl;
    for(k=1;k<=m;k++){
        cin>>i>>j;
        GRAPH[i][j] = 1;
    }
    cout<<"Enter initial vertex :"<<endl;
    cin>>v;
    cout<<"Visited vertex : "<<endl;
    cout<<v<<" ";

    visited[v]=1;

    for(k=1;k<n;k++){
        for(j=n;j>=1;j--)
            if(GRAPH[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
        {
            visit[j]=1;
            stk[top]=j;
            top++;
        }
        v = stk[--top];
        cout<<v<<" ";
        visit[v]=0;   visited[v]=1;
    }
    return 0;
}
