#include<bits/stdc++.h>
using namespace std;
vector<int> a[1000000];
int d[300005],ch[300005],n,A,B;
void bfs(int x)
{
    queue<int> q;
    ch[x];
    q.push(x);
    d[x]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u==B) break;
        for(int i=0;int v=a[u][i];++i)
            if(ch[v]==0)
        {
            ch[v]=1;
            d[v]=d[u]+1;
            q.push(v);
        }
    }
}
main()
{
    cin>>n>>A>>B;
    int x,y;
    for(int i=1;i<=n;++i)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=0;i<=n;++i) a[i].push_back(0);
    bfs(A);
    cout<<d[B]-2;
}

