#include <bits/stdc++.h>
using namespace std;
const int N=1e4+1;
int n,s,f[N];
struct bg { int x,y,z; } a[N];
bool ss(bg u,bg v) { return u.x<v.x; }
main()
{
    freopen("ROOM.TXT","r",stdin);
    //freopen("ROOM.OUT","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        cin>>a[i].x>>a[i].y;
        a[i].z=a[i].y-a[i].x;
    }
    sort(a+1,a+1+n,ss);
    int x,y,z;
    for (int i=1;i<=n;++i)
    {
        x=a[i].x;
        y=a[i].y;
        z=a[i].z;
        f[i]=z;
        for (int j=1;j<i;++j)
            if (x>=a[j].y) f[i]=max(f[i],f[j]+z);
        s=max(s,f[i]);
    }
    cout<<s;
}
