#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int n,k,a[N],t[N];
read()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for (int i=1;i<=n;++i) cin>>a[i];
}
main()
{
    //freopen("TUYENDO.INP","r",stdin);
    //freopen("TUYENDO.OUT","w",stdout);
    read();
    k=1;
    t[1]=a[1];
    int l,r,m;
    for (int i=2;i<=n;++i)
    {
        l=0;r=k+1;
        while (l+1!=r)
        {
            m=(l+r)/2;
            if (a[i]<t[m]) r=m; else l=m;
        }
        if (r<=k) t[r]=a[i];
        else ++k,t[k]=a[i];
    }
    cout<<n-k;
}
