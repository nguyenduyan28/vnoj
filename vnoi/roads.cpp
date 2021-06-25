#include <bits/stdc++.h>
using namespace std;
int n,r,k;
const int inf =109;int d[inf];
int l[inf][inf];
int c[inf][inf];
typedef pair<int,int> ii;
struct node{
	int v,w,c;
	node(int _v=0,int _w=0,int _c=0){v=_v,w=_w,c=_c;}
};
bool operator >(node a,node b){
	return a.c>b.c;
}
vector<node>g[inf];
void enter(){
	cin>>k;
	cin>>n;
	cin>>r;
	for (int i=1;i<=n;i++){
		g[i].clear();
	}
	for (int i=1;i<=r;i++){
		int s,t,x,d;
		cin>>s>>t>>x>>d;
		l[s][t]=l[t][s]=x;
		c[s][t]=c[t][s]=d;
		g[s].push_back(node(t,x,d));


}
}
void dijkstra(){
	for (int i=1;i<=n;i++){
		d[i]=1000000;
	}
	priority_queue <node,vector<node>,greater<node>>pq;
	pq.push(node(1,0,0));
	while(pq.size()){
		int u=pq.top().v;
		int l=pq.top().w;
		int cost=pq.top().c;


		pq.pop();
		if (l>=d[u])continue;
		d[u]=l;

		for (int i=0;i<int(g[u].size());i++){
			int v=g[u][i].v;
			int w=g[u][i].w;
			int c=g[u][i].c;
			if (cost+c>k)continue;
			pq.push(node(v,w+l,c+cost));
		}
	}
}
void solve(){
	dijkstra();
	if (d[n]==1000000) cout<<-1<<endl;
	else cout<<d[n]<<endl;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		enter();
		solve();
	}
}
