#include <bits/stdc++.h>
#define f "cr7."
using namespace std;
int n,m,res;
long x;
map <long,bool> a;
main()
{
    //freopen(f"inp","r",stdin);
    //freopen(f"out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    while (n--) cin>>x,a[x]=1;
    while (m--) cin>>x,res+=a[x];
    cout<<res;
}
