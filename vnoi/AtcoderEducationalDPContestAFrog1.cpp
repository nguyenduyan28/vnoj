#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int n;
	cin>>n;
	int h[maxn];
	for (int i=1;i<=n;i++){
		cin>>h[i];
	}
	int dp[maxn];
	 dp[1]=0;
	dp[2]=dp[1]+abs(h[2]-h[1]);
	for (int i=3;i<=n;i++){
		dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
	}
	cout<<dp[n];
}
