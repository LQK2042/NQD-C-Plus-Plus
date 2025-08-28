#include<bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
priority_queue<long long> a,b;
long long n,x,y,res,d;
main()
{
    freopen("ENERGY.INP","r",stdin);
    freopen("ENERGY.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    fo(i,1,n*2)
    {
        cin>>x>>y;
        res+=min(x,y);
        x<=y ? a.push(y-x) : b.push(x-y);
    }
    d=a.size();
    fo(i,1,min(d,n)) res+=a.top(),a.pop();
    d=b.size();
    fo(i,1,min(d,n)) res+=b.top(),b.pop();
    cout<<res;
}
