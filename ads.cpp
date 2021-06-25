#include <bits/stdc++.h>
using namespace std;
	const int mxN=2e5;
	int m,n;
	int dd[mxN];
	vector <int> adj[mxN];
void dfs(int u){
	dd[u]=1;
	for (auto d:adj[u]){
		if(dd[d]) continue;
		dfs(d);
	}
}
	int main(){
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int tp=0;
	for (int i=1;i<=n;i++)
		if (!dd[i]) dfs(i),tp++;
	cout<<m-n+tp;
}
