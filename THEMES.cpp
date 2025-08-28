#include <bits/stdc++.h>
#define task "themes."
using namespace std;
int x,res;
map <int,bool> a;
main()
{
    freopen(task"inp","r",stdin);
    freopen(task"out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>x;
    while (cin>>x)
        if (!a[x]) a[x]=1,++res;
    cout<<res;
}
