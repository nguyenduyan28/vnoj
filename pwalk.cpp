
#include <bits/stdc++.h>
using namespace std;
#define int  long long
typedef pair<int,int> ii;
const int maxn=1009;
const int inf=10000001;
const int mod=10e9+7;
int a[maxn][maxn];
vector<ii> g[maxn];
int dd[maxn];
queue<int>q;
void bfs(int u){
    memset(dd,false,sizeof(dd));
    dd[u]=true;
    a[u][u]=0;
    q.push(u);
    while (!q.empty()){
        int v=q.front();
        q.pop();
        for (int i=0;i<g[v].size();i++){
            int t=g[v][i].first;
            int l=g[v][i].second;
        if(dd[t]==false){
            a[u][t]=a[u][v]+l;
            dd[t]=true;
            q.push(t);
        }
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie();
    int n,q;
    cin>>n>>q;
    for (int i=1;i<n;i++){
        int d,b,c;
        cin>>d>>b>>c;
        g[d].push_back(ii(b,c));
        g[b].push_back(ii(d,c));
        
    }
    for(int i=1;i<=n;i++)bfs(i);
    for (int i=1;i<=q;i++){
        int x,y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    return 0;
}
