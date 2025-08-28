#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int n,k,a[N],d,s,f=1;;
read()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    int x;
    priority_queue<int,vector<int>,greater<int>> q;
    for (int i=1;i<=n;++i) cin>>x,q.push(x);
    for (int i=1;i<=n;++i) a[i]=q.top(),q.pop();
}
main()
{
    //freopen("MILK.INP","r",stdin);
    //freopen("MILK.OUT","w",stdout);
    read();
    for (int i=1;i<=n;++i)
    {
        if (a[i]<f) ++d;
        if (i%k==0) ++f;
    }
    cout<<d<<endl;
    int l,r,m;
    if (d>0) l=k,r=d+k;
    else l=1,r=k;
    while (l<=r)
    {
        m=(l+r)/2;f=m;
        while (f<n&a[f+1]>=f/m) f+=m;
        if (f>=n) s=m,r=m-1;
        else l=m+1;
    }
    cout<<s;
}
