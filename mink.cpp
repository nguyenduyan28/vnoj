#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		const int maxn=17001;
		deque<int>dq;
		int a[maxn];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		while(dq.size())dq.pop_back();
		for (int i=1;i<=n;i++){
			while (dq.size()&&a[dq.back()]>=a[i])dq.pop_back();
			dq.push_back(i);
			if(dq.front()+k<=i)dq.pop_front();
			if(i>=k)cout<<a[dq.front()]<<" ";
		}
		cout<<endl;


	}
}
