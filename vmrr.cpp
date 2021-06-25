#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
    
    const int maxn=10e6;
    char s[maxn+69];
   char x,y;
  gets(s);
  int n=strlen(s);
   cin>>x>>y;
   long long d[maxn];
   long long ans=0;
   for (int i=0;i<n;i++){
	   if (s[i]==y) ans+=d[x];
	   d[s[i]]++;
	 }
	 cout<<ans;
}
