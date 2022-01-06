#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;	
freopen("SEQUENCE.IN","r",stdin);
freopen("SEQUENCE.OUT","w",stdout);
	int a[n+1],b[n+1];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int j=1;j<=n;j++){
		cin>>b[j];
	}
	bool ok=true;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i!=j){
				if((a[i]==a[j]&&b[i]!=b[j])||(b[i]==b[j]&&a[i]!=a[j]))ok=false;
			}
		}
	}
	if (ok)cout<<"YES";
	else cout<<"NO";
}
