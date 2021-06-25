#include <bits/stdc++.h>
using namespace std;
const int maxn=50000;
int a[maxn];
int st[maxn*4];
int sb[maxn*4];

void update(int i,int l,int r){
	if (l==r){
		sb[i]=st[i]=a[l];
		
		return;
		}
		int mid=(l+r)/2;
	update(2*i,l,mid);
	update(2*i+1,mid+1,r);
	st[i]=max(st[i*2],st[i*2+1]);
	sb[i]=min(sb[i*2],sb[i*2+1]);
}
int getMax(int i,int l ,int r,int u,int v){
	if (v<l||u>r)return -1;
	if (u<=l&&v>=r)return st[i];
	int mid=(l+r)/2;
	return max(getMax(i*2,l,mid,u,v),getMax(i*2+1,mid+1,r,u,v));
}
int getMin(int i,int l ,int r,int u,int v){
	if (v<l||u>r)return 10000000;
	if (u<=l&&r<=v)return sb[i];
	int mid=(l+r)/2;
	return min(getMin(i*2,l,mid,u,v),getMin(i*2+1,mid+1,r,u,v));
}
		
int main(){
	int n,q;
	cin>>n>>q;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	update(1,1,n);
	for (int i=1;i<=q;i++){
		int u,v;
		cin>>u>>v;
		cout<<getMax(1,1,n,u,v)-getMin(1,1,n,u,v)<<endl;
	}
	return 0;
	
}
