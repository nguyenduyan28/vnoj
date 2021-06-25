#include <bits/stdc++.h>
using namespace std;
int n;
int c[18][18];
int t[18];
int x[18];
const int inf=10e6;
int best=inf;
bool f[19]={false};
void move(int u){
	for (int i=2;i<=n;i++){
		if(!f[i]){
		t[u]=i;
		x[u]=x[u-1]+c[t[u-1]][i];//tong di chuyen sau=tong chuyen truoc+gia tien tu noi trc toi noi sau
		if (x[u]<best){
			if (u<n){
				f[i]=true;
				move(u+1);
				f[i]=false;
			}
			else if (x[n]<best){
				best=x[n];
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
	x[1]=0;
	t[1]=1;
	move(1);
	cout<<best;
}
