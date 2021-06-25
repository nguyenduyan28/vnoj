#include <bits/stdc++.h>
using namespace std;
bool prime[1002];
int ans;
int k;
void sieve(int n){
	int c=0;
	for (int i=1;i<=n;i++){
		prime[i]=true;
	}
	prime[0]=false;
	prime[1]=false;
	for (int i=2;i<=n;i++){
		if(prime[i])
		for (int j=i;j<=n;j+=i){
			if (prime[j]){
			prime[j]=false;
			c++;
		
			if (c==k)
			ans=j;
		}
	}
}
}
int main(){
	int n;
	while (cin>>n>>k){
		sieve(n);
		cout<<ans<<endl;
	}
}
