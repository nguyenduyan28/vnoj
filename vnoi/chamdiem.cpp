#include <bits/stdc++.h>
using namespace std;
int s,n,k;
int ans;
int a[25][22];
int trace[22];
int kq[22];
int best=0;
void move(int u){
	for (int i=1;i<=n;i++){
		if (a[i][u]>=trace[u-1]){
			
				trace[u]=a[i][u];
				ans+=a[i][u];
				if (ans<s&&u<k){
				move(u+1);
				trace[u]=0;
				ans-=a[i][u];
			}
			else if (ans==s){
				best=ans;
				for (int i=1;i<=k;i++){
					kq[i]=trace[i];
				}
		}
	}

}
}
int main(){
	
	cin>>s>>k>>n;

	for (int i=1;i<=k;i++)
		trace[i]=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=k;j++){
			cin>>a[i][j];
		}
	}	
	ans=0;
	trace[0]=0;
	move(1);
	if (best==s){
		cout<<"YES"<<endl;
		for (int i=1;i<=k;i++){
			cout<<kq[i]<<" ";
		}

	}
	else cout<<"NO"<<endl;
}
