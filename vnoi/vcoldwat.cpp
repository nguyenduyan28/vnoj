#include <bits/stdc++.h>
using namespace std;
int n,c;
int d[1000000];
vector <int> g[1000000];
bool dd[1000000];
void dfs(int u){
	dd[u]=true;
	for (int i=0;i<g[u].size();i++){
		int v=g[u][i];
		d[v]=d[u]+1;
		dfs(v);
	}
}
int main(){
	cin>>n>>c;
	for (int i=1;i<=c;i++){
		int e,b1,b2;
		cin>>e>>b1>>b2;
		g[e].push_back(b1);
		g[e].push_back(b2);
	}
	d[1]=1;
	dfs(1);
	
	for (int i=1;i<=n;i++){
		cout<<d[i]<<endl;
	}
}
