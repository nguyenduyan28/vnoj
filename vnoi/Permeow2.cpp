#include <bits/stdc++.h>
#include "permeow2.h"
using namespace std;
const int maxn=5005;
const int inf=(int)1e9+7;
const int mod=(int)1e9+7;
int f[maxn][maxn];
int count_permutation(vector<int>s){
	int n=s.size();
	for (int i=1;i<=n;i++){
		f[0][i]=1;
	}
	for (int t=1;t<=n;t++){
		int maxx=-inf,maxy=inf;
		for (int l=t;l>=1;l--){
			maxx=max(maxx,s[l-1]);
			maxy=min(maxy,s[l-1]);
			f[t][maxx]=(f[t][maxx]+f[l-1][maxy])%mod;
		}
		for (int x=n;x>=1;x--){
			f[t][x]=(f[t][x]+f[t][x+1])%mod;
		}
	}
	return f[n][1];
}
