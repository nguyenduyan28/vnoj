
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int a[maxn];
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)cin>>a[i];
	int ans=0;
	for (int i=2;i<=n;i+=2)ans+=a[i];
	cout<<ans;
}
