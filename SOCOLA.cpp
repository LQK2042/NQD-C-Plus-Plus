#include <bits/stdc++.h>
using namespace std;
int n,a[10000][10000],s;
main()
{
    cin>>n;int t;
    for(int i=1;i<=n;++i)
        for (int j=1;j<=n;++j)
        {
            cin>>t;
            a[i][j]=a[i][j-1]+a[i-1][j]+t-a[i-1][j-1];
        }
    for (int i=1;i<=n;++i)
        for (int j=1;j<=n;++j)
        {
            int s1=a[i][j];
            int s2=a[i][n]-a[i][j];
            int s3=a[n][j]-a[i][j];
            int s4=a[n][n]-s1-s2-s3;
            int t1=min(s1,s2);
            int t2=min(s3,s4);
            s=max(s,min(t1,t2));
        }
    cout<<s;
}
