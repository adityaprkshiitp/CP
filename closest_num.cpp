#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;
#define MAX 1000001;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin  >> n;
    ll arr[n];
    for (int i = 0; i < n; i++){cin >> arr[i];}
    sort(arr,arr+n);
    vec res;
    ll mini = MAX;
    for (int i = 0; i < n-1; i++){
        ll temp = mini;
        mini = min(mini, abs(arr[i] - arr[i+1])); 
        if(temp == abs(arr[i] - arr[i+1])){
            res.push_back(arr[i]);
            res.push_back(arr[i+1]);
        }else if(mini != temp){
            res.clear();
            res.push_back(arr[i]);
            res.push_back(arr[i+1]);
        }
    }
    for (int i = 0; i < res.size(); i++){cout << res[i] << " "; }
    
    return 0;
}