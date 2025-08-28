#include<bits/stdc++.h>
using namespace std;
vector <int> a[1000006];
int m,n,s,res,x,y;
bool ch[1000006];
void bfs(int x)
{
    queue<int> p;
    ch[x]=1;
    p.push(x);
    while(!p.empty())
    {
        int u=p.front();
        p.pop();
        for(int i=0;int v=a[u][i];++i)
            if(ch[v]==0)
            {
               ch[v]=1;
               p.push(v);
            }
    }
}
main()
{
    cin>>n>>m;
    for(int i=1;i<=m;++i)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=0;i<=n;++i) a[i].push_back(0);
    for(int i=1;i<=n;++i) if(ch[i]==0) res++,bfs(i);
    cout<<res;
}

