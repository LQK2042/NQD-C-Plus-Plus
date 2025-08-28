#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int n,f[N],a[N],d,s;
read()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;int x;
    for (int i=1;i<=n;++i)
    {
        cin>>x;
        if (f[x]>0) ++f[x];
        else ++d,a[d]=x,++f[x];
    }
}
main()
{
    //freopen("PIXEL.INP","r",stdin);
    //freopen("PIXEL.OUT","w",stdout);
    read();
    for (int i=1;i<=d;++i) s=max(s,f[a[i]]);
    cout<<d<<endl<<s;
}
