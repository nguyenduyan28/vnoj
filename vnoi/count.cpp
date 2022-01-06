#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int maxn=1e6+7;
bool isPrime[maxn];

int32_t main(){
ios::sync_with_stdio(0);
	cin.tie();
int N = maxn;
  bool check[N + 1];
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
 
   for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
   }
   for (int i=1;i<=N;i++){
	   if (check[i]==true&&i*i<N)check[i*i]=true;
   }
int t;
cin>>t;
while (t--){
	int n;
	cin>>n;
	int q=sqrt(n);
	int ans=1;
	for (int i=2;i<=n;i++){
		if (check[i]==true)ans++;
	}
	cout<<ans<<endl;
}
}

