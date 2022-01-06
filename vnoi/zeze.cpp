#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e5+7;
int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
	int n,m;
	cin>>m;
	int f2=0,f5=0;
	while (m--){
		cin>>n;
		while (n%2==0){
			f2++;
			n/=2;
		}
		while (n%5==0){
			f5++;
			n/=5;
		}
	}
	cout<<min(f2,f5);
}
