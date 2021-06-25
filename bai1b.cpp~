#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int> dq;
	int n,k;
	const int maxn=10e5;
	int a[maxn];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		while(dq.size()&&a[dq.back()]<=a[i])dq.pop_back();
		dq.push_back(i);
		if(dq.front()+k<=i)dq.pop_front();
		if (i>=k)cout<<a[dq.front()]<<endl;
	}
}
