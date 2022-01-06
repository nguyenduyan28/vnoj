
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int n,m;
	cin>>n>>m;
	vector<int> s;
	if (n<=m){
		for (int i=1;i<=m;i++){
			s.push_back(n);
		}
	}else for(int i=1;i<=n;i++){
		s.push_back(m);
	}
	for (int v:s){
		cout<<v;
	}
}
