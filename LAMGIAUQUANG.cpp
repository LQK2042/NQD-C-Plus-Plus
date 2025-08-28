#include<bits/stdc++.h>
using namespace std;
int c,d,n,m,a[1000][1000],f[1000][1000],s=1e9;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
           cin>>a[i][j];
    for(int i=2;i<=n-1;++i)
        for(int j=2;j<=m-1;++j)
        {
            s=min(s,a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]);

        }
cout<<s;
}
