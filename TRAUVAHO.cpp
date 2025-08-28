#include <bits/stdc++.h>
using namespace std;
const int N=1e4+4;
struct diem{
    int x, y;
};
int n, m, st, sh;
char c;
int a[N][N], ch[N][N];

int hx[]={0,-1,0,1};
int hy[]={-1,0,1,0};
int d[4];
void bfs(int i, int j){
    queue<diem> q;
    ch[i][j]=1;
    q.push({i, j});
    d[a[i][j]]++;
    while (!q.empty()){
        diem u=q.front();
        q.pop();
        for(int k=0; k<=3; k++){
            int x=u.x+hx[k];
            int y=u.y+hy[k];
            if ( ch[x][y]==0 && a[x][y]>0 && x>0 && y>0 && x<=m && y<=n){
                ch[x][y]=1;
                q.push({x, y});
                d[a[x][y]]++;
            }
    }
}
}

void dfs(int i, int j){
    int u=0, v=0;
    ++d[a[i][j]];
    ch[i][j]=1;

    for(int k=0; k<4; k++){
            u = i + hx[k];
            v = j + hy[k];
            if (ch[u][v]==0 && a[u][v]>0 && u>0 && v>0 && u<=m && v<=n)
                dfs(u,v);
    }
}
main(){
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TRAUVAHO.INP","r", stdin);
    freopen("TRAUVAHO.OUT","w", stdout);
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++){
            cin>>c;
            if(c=='.') a[i][j]=0;
            if(c=='*') a[i][j]=1;
            if(c=='x') a[i][j]=2;
            if(c=='o') a[i][j]=3;
        }
    memset(ch, 0, sizeof(ch));
    st=0; sh=0;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            if ( (a[i][j]>0) && ch[i][j]==0){
                memset(d, 0, sizeof(d));
                //dfs(i,j);
                bfs(i,j);
                if (d[2]>=2*d[3]) st= st + d[2];
                else sh = sh + d[3];
     }
cout<<st<<' '<<sh<<endl;
}
