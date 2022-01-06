#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int tinh(int i){
	int ans=0;
	for (int j=i;j;j--){
		ans+=j;
	}
	return ans;
}
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	vector<int>chan,le;
	int n; cin>>n;
	int a[n+3];
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]%2==0)chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	int ans1=0,ans2=0;
	if (chan.size()>0)ans1=tinh(chan.size()-1);
	if (le.size()>0)ans2=tinh(le.size()-1);
	cout<<ans1+ans2;

}
