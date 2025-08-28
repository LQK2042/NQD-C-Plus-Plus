#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int oo=INT_MAX;
int n,res,f[N],g[N],w[N];
long long a[N],b[N];
void qhdtang(){
  for(int i=1;i<=n;++i) b[i]=oo;
  b[0]=-oo;
  for(int i=1;i<=n;++i){
    int k=lower_bound(b+1,b+1+n,a[i])-b;
    b[k]=a[i];
    f[i]=k;
  }
}
void qhdgiam(){
  for(int i=1;i<=n;++i) b[i]=oo;
  b[0]=-oo;
  for(int i=n;i>=1;--i){
    int k=upper_bound(b+1,b+1+n,a[i])-b;
    b[k]=a[i];
    g[i]=k;
  }
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  cin>>n;
  for(int i=1;i<=n;++i) cin>>a[i];
  qhdtang();
  qhdgiam();
  for(int i=0;i<=n;++i){
    w[i]=2*min(f[i],g[i]);
    res=max(res,w[i]);
  }
  cout<<res-1;
  return 0;
}
