#include<bits/stdc++.h>
using namespace std;
int c,d,n,s,m,a[1000][1000],f[1000][1000];
main()
{
    cin>>m>>n;
    for(int i=1;i<=m;++i)
        for(int j=1;j<=n;++j)
            cin>>a[i][j],f[i][1]=a[i][1];

       for(int i=1;i<=m;++i)
        for(int j=1;j<=n;++j)
        {
          f[i][j]=max(f[i+1][j-1],max(f[i][j-1],f[i-1][j-1]))+a[i][j];
          s=max(s,f[i][j]);
        }cout<<s;
}
