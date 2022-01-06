#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int n;int t;
	cin>>n>>t;
	map<int,int>m;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x]++;
	}
	int res=0;
	for (pair<int,int>e:m){
		int x=e.first;
		int y=t-x;
		if (x>y)break;
		if (x<=y)res+=1LL*m[x]*(m[x]-1)/2;
		else res+=1LL*m[x]*m[y];
	}
	cout<<res;
}
