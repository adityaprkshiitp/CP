#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vec;
typedef pair<int,pair<int,int>> ppi;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // input
    int t; cin >> t;
    while (t--){
        // input
        int n,k,x; cin >> n >> k >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        //maxHeap
        priority_queue<pair<int,int>> maxHeap;
        for (int i = 0; i < n; i++){
            maxHeap.push({abs(arr[i] - x),arr[i]});
            if(maxHeap.size()>k){maxHeap.pop();}
        }
        
        // print
        while (maxHeap.size()>0){
            cout << maxHeap.top().second << ' ';
            maxHeap.pop();
        }
        
        
    }
    
}