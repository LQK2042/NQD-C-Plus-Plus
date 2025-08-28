#include<bits/stdc++.h>;
using namespace std;
const int N=1e5+5;
struct hcn{
    int x,y;
} a[N];
bool cmp(hcn u, hcn v)
{
    return u.x<v.x;
}
int n,f[N],res;
main ()
{
    cin>>n;
    int u,v;
    for (int i=1;i<=n;i++)
    {
        cin>>u>>v;
        a[i].x=min(u,v);
        a[i].y=max(u,v);
    }
    sort(a+1,a+1+n,cmp);
    for (int i=1;i<=n;++i)
    {
        f[i]=1;
        for (int j=0;j<i;j++)
        {
        if (a[i].x>a[j].x && a[i].y>a[j].y)
            f[i]=max(f[i],f[i]+1);
        }
        res=max(res,f[i]);
    }
    cout<<res;
}
