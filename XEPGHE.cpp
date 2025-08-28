#include <bits/stdc++.h>
using namespace std;
int n,k;
struct bg {int x,y;}a[100001];
bool s1 (bg u,bg v)
{
    return u.x<v.x|(u.x==v.x&u.y<v.y);
}
bool s2 (bg u,bg v)
{
    return u.y<v.y|(u.y==v.y&u.x<v.x);
}
int xuli1()
{
    int y=0,s=0;
    sort(a+1,a+1+n,s1);
    for (int i=1;i<=n;++i)
        if (a[i].y>=y) ++s,y=a[i].y;
    return s;
}
int xuli2()
{
    int x=0,s=0;
    sort(a+1,a+1+n,s2);
    for (int i=1;i<=n;++i)
        if (a[i].x>=x) ++s,x=a[i].x;
    return s;
}
read()
{
    //freopen("XEPGHE.INP","r",stdin);
    //freopen("XEPGHE.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int x,y;
    for (int i=1;i<=n;++i)
    {
        cin>>x>>y;
        a[i].x=min(x,y);
        a[i].y=max(x,y);
    }
}
main()
{
    read();
    cout<<max(xuli1(),xuli2());
}
