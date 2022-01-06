#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int h,m,a,b;
	cin>>h>>m>>a>>b;
	h=(h-a+b+24)%24;
	cout<<h<<" "<<m;
}
