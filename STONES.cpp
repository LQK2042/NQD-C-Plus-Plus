#include <bits/stdc++.h>
#define f "stones."
using namespace std;
int n;
priority_queue <int,vector<int>,greater<int> >p;
main()
{
    freopen(f"inp","r",stdin);
    freopen(f"out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y;cin>>x;
    while (cin>>x) p.push(x);
    long long res=0;
    while (p.size())
    {
        y=0;
        x=p.top();p.pop();
        if (p.size()) y=p.top(),p.pop();
        res+=x+y;
        if (p.size()) p.push(x+y);
    }
    cout<<res;
}
