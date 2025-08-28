#include<bits/stdc++.h>
using namespace std;
const int N=1e4+3;
long long n,h,sum,t;
struct bg{
   int x,y;
}a[N];
bool ss(bg u, bg v){
   return u.y<v.y;
}
int solve(){
   priority_queue<int> pq;
   int d=0;
   for(int i=1;i<=n;++i){
      sum=sum-a[i].x;
      pq.push(a[i].x);
      if(sum+a[i].y<h){
         h=h-pq.top();pq.pop();
         ++d;
      }
   }
   return n-d;
}
main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0),cout.tie(0);
   cin>>t;
   while(t--){
      cin>>n>>h;
      for(int i=1;i<=n;++i) cin>>a[i].x,sum+=a[i].x;
      for(int i=1;i<=n;++i) cin>>a[i].y;
      sort(a+1,a+1+n,ss);
      cout<<solve()<<endl;
   }
}
