/*
#include<bits/stdc++.h>
using namespace std;
long long a[1000],b[1000],n,s,p,x,y;
main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i],b[i]=a[i];
    sort(b+1,b+n+1);
    for(int j=1;j<=n;++j)
        for(int i=1;i<=n;++i)
    {

        if (a[i]>=b[j]) s+=b[j];
        else p=max(p,s),s=0;
         if (i==n) p=max(p,s),s=0;
    }
    cout<<p;
}
*/
#include <bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n;
int a[N],l[N],r[N];
stack <int> d,c;
long long s,res;
main(){
   cin>>n;
   for(int i=1;i<=n;++i) cin>>a[i];
   for(int i=1;i<=n;++i){
      while(!d.empty()&&a[d.top()]>=a[i]) d.pop();
      if(d.empty()) l[i]=0;
      else l[i]=d.top();
      d.push(i);
   }
   for(int i=n;i>=1;--i){
      while(!c.empty()&&a[c.top()]>=a[i]) c.pop();
      if(c.empty()) r[i]=0;
      else r[i]=c.top();
      c.push(i);
   }
   for(int i=1;i<=n;++i){
      int p=l[i],q=r[i];
      s=1ll*(q-p-1)*a[i];
      res=max(res,s);
   }
   cout<<res;
}
