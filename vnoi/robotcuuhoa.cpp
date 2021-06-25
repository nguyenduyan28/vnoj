#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int n,m;
int d[505];
int t[505][505];
int c[505][505];
int w;
int ok[505];
const int inf=10e5;
vector<ii>g[5000];
void dijkstra(){
	priority_queue<ii,vector<ii>,greater<ii>>pq;
	for (int i=1;i<=n;i++){
		d[i]=inf;
	}
	d[1]=0;
	pq.push(ii(0,1));
	while(pq.size()){
		int u=pq.top().second;
		int du=pq.top().first;
		pq.pop();
		if(du!=d[u])continue;
		for (int i=0;i<g[u].size();i++){
			int v=g[u][i].second;
			int uv=g[u][i].first;
			if (d[v]>uv+du){
				d[v]=uv+du;
				pq.push(ii(d[v],v));
			}
		}
	}
}
bool recur(int w){
	queue <ii> q;q.push(ii(n-1,w));
	while(!q.empty()){
		int u=q.front().first;
		int e=q.front().second;
		q.pop();
		if(u==1 )return 1;
		for (int i=0;i<g[u].size();i++){
			int v=g[u][i].second;
			if(c[u][v]<=e){
				q.push(ii(v,ok[v]?w:e-c[u][v]));
			}

		}
	}
	return 0;
}
void calcw(){
	int lo=0;int hi=inf;
	while (lo<hi){
		int mid=(lo+hi)/2;
		if (recur(mid)){
			hi=mid;
		}
		else lo=mid+1;

	}
	cout<<lo;
}
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>ok[i];
	}
	cin>>m;
	for (int i=1;i<=m;i++){
		int x,y,tt,cc;
		cin>>x>>y>>tt>>cc;
		c[x][y]=c[y][x]=cc;
		t[x][y]=t[y][x]=tt;
		g[x].push_back(ii(t[x][y],y));
		g[y].push_back(ii(t[x][y],x));
	}
	dijkstra();
	calcw();
}
