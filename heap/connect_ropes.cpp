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
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        // minHeap
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for (int i = 0; i < n; i++){
            minHeap.push(arr[i]);
        }
        int cost = 0;
        while (minHeap.size() >= 2){
            int first = minHeap.top();
            minHeap.pop();
            int second = minHeap.top();
            minHeap.pop();
            cost += first + second;
            minHeap.push(first + second);
        }
        cout << cost << endl;  
    }
    
}