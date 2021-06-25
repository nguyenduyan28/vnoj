#include <bits/stdc++.h>
using namespace std;
int main(){
	const int mod=(int)1e9+7;
	const int maxn=1006000;
	char s[maxn];
	cin>>(s+1);
	int sum=0;
	int ans=0;
	int n=strlen(s+1);
	for (int i=1;i<=n;i++){
		sum=(10LL*sum+1LL*i*(s[i]-'0'))%mod;
		ans=(ans+sum)%mod;
		cout<<sum<<" "<<ans<<endl;
	}
	
}
