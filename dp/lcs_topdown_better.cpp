#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

// baad mein karenge abhi aukat nahi h samajhne ka
ll lcs(string x, string y, int n, int m){
    vector<vec> dp(n + 1, vec (m + 1,0));

    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            if(x[i-1] == y[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        } 
    }
    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < m + 1; j++){
            cout << dp[i][j] << " ";
        }cout << endl;
    }cout << endl;

    return dp[n][m];
    
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        string s1,s2; cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        ll res = lcs(s1,s2,n,m);
        cout << res << endl;
    }
    return 0;
}