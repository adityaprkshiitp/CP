#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

ll knapsack(vec deadline, vec profit, int w, int n){
    if(n==0){
        return 0;
    }

    if(deadline[n-1] > w){
        return max(profit[n-1] + knapsack(deadline,profit,w+1,n-1), knapsack(deadline,profit,w,n-1));
    }else{
        return knapsack(deadline,profit,w,n-1);
    }

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        ll n,temp; cin >> n;
        vec deadline;
        vec profit;
        for (int i = 0; i < n; i++){
            cin >> temp;
            deadline.push_back(temp);
        }
        for (int i = 0; i < n; i++){
            cin >> temp;
            profit.push_back(temp);
        }
        ll w = 0;
        ll res = knapsack(deadline,profit,w,n);
        cout << res;
    }
    return 0;
}