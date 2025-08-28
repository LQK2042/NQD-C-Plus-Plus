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
#define Task "copy"
#define maxn 1000005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>

using namespace std;

int a[maxn], n, W;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    freopen(Task".inp", "r", stdin);
    freopen(Task".out", "w", stdout);
    cin >> n >> W;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    int res = 1;
    while (res <= n && W >= a[res]) W -= a[res++];
    cout << res - 1;
    //cerr << "-------------" << res-1 << endl;
    return 0;
}

