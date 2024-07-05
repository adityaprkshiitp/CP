#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

// 1d vector space comeplexity
ll knapsack(vec weight, vec value, ll w, ll n){

    //initialize
    vec dp(w + 1, 0); 
  
    // choice diagram
    for(int i=0; i < n; i++){
    	for(int j = w; j >= weight[i]; j--){
    		dp[j] = max(dp[j], value[i] + dp[j - weight[i]]);
    	}
    }  
    for (int i = 0; i <= w; i++)
    {
        cout << dp[i] << " ";
    }cout << endl;
    
     
    return dp[w]; 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        ll n,temp; cin >> n;
        ll w; cin >> w;
        vec weight;
        vec value;
        for (int i = 0; i < n; i++){
            cin >> temp;
            weight.push_back(temp);
        }
        for (int i = 0; i < n; i++){
            cin >> temp;
            value.push_back(temp);
        }
        ll res = knapsack(weight,value,w,n);
        cout << res << endl;
    }
    return 0;
}