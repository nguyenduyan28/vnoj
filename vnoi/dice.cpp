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
	if (n%4==1){
		cout<<6;
	}
	else if (n%4==2)cout<<4;
	else if (n%4==3)cout<<1;
	else if (n%4==0)cout<<3;
}
