#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	const int maxn=10e5;
	int a[maxn];
	int minrange[maxn];
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	deque<int> dq;
	while(!dq.empty()){
		dq.pop_front();
	}
	for (int i=1;i<=n;i++){
		while (dq.size()&&a[dq.back()]>=a[i])dq.pop_back();
		dq.push_back(i);
		if(i>=dq.front()+k)dq.pop_front();
		if (i>=k)cout<<a[dq.front()]<<endl;
	}
}
