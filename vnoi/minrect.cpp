
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int ans;
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	ans=abs(x1-x2)*abs(y1-y2);
	cout<<ans;
}
