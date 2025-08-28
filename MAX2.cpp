#include <bits/stdc++.h>
#define task "max2."
using namespace std;
int x,t1,t2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    t1=t2=-1e9;
    freopen(task"inp","r",stdin);
    freopen(task"out","w",stdout);
    cin>>x;
    while (cin>>x)
        if (x>t1) t2=t1,t1=x;
        else if (x>t2) t2=x;
    cout<<t2;
}
