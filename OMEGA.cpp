#include<bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
typedef pair<int,int> ii;
vector<ii> a[10000];
int res1,res2,dodai,n,m,d[1000],t;
void dij(int s)
{
    priority_queue<ii,vector<ii>,greater<ii> > p;
    fo(i,1,n) d[i]=1e9;
    d[s]=0;
    p.push(ii(0,s));
    while(!p.empty())
    {
        int du=p.top().first;
        int u=p.top().second;
        p.pop();
        if(du!=d[u]) continue;
        for(int i=0;int v=a[u][i].second;i++)
            if(d[v]>du+a[u][i].first)
            {
                d[v]=du+a[u][i].first;
                p.push(ii(d[v],v));

            }
    }
}
main()
{
    freopen("OMEGA.INP","r",stdin);
    freopen("OMEGA.OUT","w",stdout);
    cin>>n>>m;
    int x,y,z;
    fo(i,1,m)
       {
           cin>>x>>y>>z;
           a[x].push_back(ii(z,y));
           a[y].push_back(ii(z,x));
       }
    fo(i,0,n) a[i].push_back(ii(0,0));
    dij(1);
    fo(i,1,n) res1+=d[i];
    res2=1;
    fo(i,2,n)
    {   dij(i);
        long long tmp=0;
        fo(j,1,n) tmp+=d[j];
        if(res1==tmp) res2++;
        if(tmp<res1)
        {
            res1=tmp;
            res2=1;
        }
    }
    cout<<res1<<' '<<res2;
}
