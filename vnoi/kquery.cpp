#include <bits/stdc++.h>
using namespace std;
struct query{
	int k;
	int l;
	int r;
};
bool operator <(const query&a,const query&b){
	return a.k<b.k;
}
vector<query> qu;
int q;
int n;
int a[30001];
void build(int id,int l,int r){
	if(l==r){
		b[id]=1;
		return;
	}
	int mid=(l+r)/2;
	build(id*2,l,mid);
	build(id*2+1,mid+1,r);
	b[id]=b[id*2+1]+b[id*2];
}
void update(int id,int l,int r,int u){
	if(u<l||u>v){
		return;
	}
	if(l==r){
		b[id]=0;
		return;
	}
	int mid=(l+r)/2;
	update(id*2,l,mid);
	update(id*2+1,mid+1,r);
	b[id]=b[id*2]+b[id*2+1];
}
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	for (int t=1;t<=q;t++){
		cin>>qu[t].l>>qu[t].r>>qu[t].k;
	}
	build(1,1,n);
	sort (qu.begin(),qu.end());
	sort (a+1,a+n+1);
	int i=1;
	for (query q:qu){
		while (a[i]<=q.k){
			b[i]=0;
			update(i,q.l,q.r,q.k);
			i++;
		}
	}
	for (int t=1;t<=q;t++){
		cout<<get(
	}

	}
