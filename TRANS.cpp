//Dai Ca Di Hoc
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define Task "trans"
#define maxn 100005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>

using namespace std;
int n, m, d[maxn];
vector <int> ke[maxn];
long long k;

void BFS(){
    memset(d, -1, sizeof(d));
    d[1] = 0;
    queue <int> q;
    q.push(1);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for(int &v : ke[u])
            if (d[v] == -1){
                d[v] = d[u]+1;
                q.push(v);
        }
    }
}

bool check(long long x){
    long long sum = 0;
    for (int i = 2; i <= n; i++)
        if (d[i] <= n && d[i] > 0) {
            sum += (x/d[i]);
            if (sum >= k) return 1;
        }
    return 0;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    freopen(Task".inp", "r", stdin);
    freopen(Task".out", "w", stdout);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        ke[u].PB(v);
        ke[v].PB(u);
    }
    BFS();
    long long l = 0, r = 1e16;
    while (r-l>1){
        long long mid = (l+r)/2;
        if (check(mid)) r = mid;
            else l = mid;
    }
    cout << r;
    return 0;
}

