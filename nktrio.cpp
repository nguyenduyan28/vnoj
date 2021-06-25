#include <bits/stdc++.h>
using namespace std;
void dfs(int u){
	dd[u]=true;
	for (int i=1;i<=n;i++){
		if (a[u][trace[u]]==1){
			trace[a[u][i]]=u;
			dfs(a[u][i]);
			dd[u]=false;
			
	}
}
int n;
int a[1001][1001];
int dd[1001];
int trace[1001];
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=1;j++){
			cin>>a[i][j];
		}}
	memset(dd,0,sizeof(dd));
	for (int i=2;i<=n;i++)trace[
	dfs(1);
}
