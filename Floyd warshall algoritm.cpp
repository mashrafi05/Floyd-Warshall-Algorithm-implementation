//Floyd warshall algoritm very very important
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    long long int graph[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j) graph[i][j]=0;
            else graph[i][j]=INT_MAX;
        }

    }
    int u,v,w;
    for(int i=1; i<=e; i++)
    {
        cin>>u>>v>>w;
        graph[u][v]=w;
    }
    cout<<"AO"<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;

    }

    for(int k=1; k<=n; k++)
    {
        cout<<"A"<<k<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++ )
            {
                graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<graph[i][j]<<" ";
            }
            cout<<endl;

        }
    }

}

//4 7
//1 2 3
//2 1 8
//1 4 7
//4 1 2
//3 4 1
//2 3 2
//3 1 5
