#include <bits/stdc++.h>
#include "drill.h"
using namespace std;
string question;
string answer;
typedef pair<string,string> ii;
map <string,string>g;
int n,m;

void drill(string question, string answer) {
    g[question]=answer;
}

string query(string question) {
    return g[question];
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> question >> answer;
		drill(question,answer);
	}
	
	for (int i = 0; i < m; i++) {
		cin >> question;
		 answer = query(question);
		cout << answer << '\n';
	}

	return 0;
}
