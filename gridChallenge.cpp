#include<bits/stdc++.h>
using namespace std;
string s[111];

int main() {
	#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			sort(s[i].begin(), s[i].end());
		}
		bool flag = true;
		for (int i = 0; i < n; i++){
			for (int j = 0; j + 1 < n; j++){
				if (s[j][i] > s[j + 1][i]){
					flag = false;
				}
			}
		}
		puts(flag ? "YES" : "NO");
	}
	return 0;
}