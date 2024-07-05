#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

bool isPalindrome(string s, int i, int j){
    if(i==j){return true;}
    if(i > j){return true;}
    while (i < j)
    {
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    
    return true;
}

vector<vector<ll>> dp(1001,vector<ll> (1001,-1));
ll mcm(string s, int i,int j){
    if(i >= j){
        return 0;
    }
    if(isPalindrome(s,i,j) == true){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    ll mini = INT_MAX;
    for (int k = i; k  <  j; k++){
        ll temp = mcm(s,i,k) + mcm(s,k+1,j) + 1;
        mini = min(mini,temp);
    }

    return dp[i][j] = mini;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        int i = 0;
        int j = n-1;
        ll res = mcm(s,i,j);
        cout << res << endl;
    }
    return 0;
}