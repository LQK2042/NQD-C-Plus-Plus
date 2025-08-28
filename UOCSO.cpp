#include <bits/stdc++.h>
using namespace std;
int n,s=1,t;
map <long long,bool> f;
long long p=1;
main()
{
    cin>>n;
    for (;n>1;--n) p*=n;
    t=1;
    while (p%2==0) ++t,p/=2;
    s*=t;
    t=1;
    while (p%3==0) ++t,p/=3;
    s*=t;
    for (int i=5;p>1;i+=6)
    {
        if (!f[i])
        {
            t=1;
            while (p%i==0) ++t,p/=i;
            s*=t;
            for (int j=2;j<=n/i;++j) f[i*j]=1;
        }
        if (!f[i+2])
        {
            t=1;
            while (p%(i+2)==0) ++t,p/=(i+2);
            s*=t;
            for (int j=2;j<=n/(i+2);++j) f[(i+2)*j]=1;
        }
    }
    cout<<s;
}
