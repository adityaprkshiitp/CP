#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

ll dp[1001][1001];
ll lcs(string x, string y, int n, int m){
    if(n==0 || m==0){
        return dp[n][m] = 0;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }else{
        if(x[n-1] == y[m-1]){
            return dp[n][m] = 1 + lcs(x,y,n-1,m-1);
        }else{
            return dp[n][m] = max(lcs(x,y,n-1,m),lcs(x,y,n,m-1));
        }
    }
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
        memset(dp,-1,sizeof(dp));
        int n = s1.size();
        int m = s2.size();
        ll res = lcs(s1,s2,n,m);
        cout << res << endl;
    }
    return 0;
}