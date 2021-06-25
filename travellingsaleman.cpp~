#include <bits/stdc++.h>
using namespace std;
int n;
bool f[19]={false};
int c[19][19];
const int inf=10e8;
int best=inf;
int t[19];
int x[19];

void move(int u){
	for (int i=2;i<=n;i++){
		if (!f[i]){
		t[u]=i;
		x[u]=x[u-1]+c[t[u-1]][i];
		if (x[u]<best){
			if (u<n){
				f[i]=true;
				move(u+1);
				f[i]=false;
			}
			else if (x[n]+c[t[n]][1]<best){
				best=x[n]+c[t[n]][1];
			}
		}

	}
}
}
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
	t[1]=1;
	x[1]=0;
	move(2);
	cout<<best;

}
