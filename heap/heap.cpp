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
        int n,k; cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        //maxHeap
        priority_queue<int> maxHeap;
        for (int i = 0; i < n; i++){
            maxHeap.push(arr[i]);
            if(maxHeap.size()>k){maxHeap.pop();}
        }
        while (maxHeap.size()>0){
            cout << maxHeap.top() << " ";
            maxHeap.pop();
        }cout << endl;

        // minHeap
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for (int i = 0; i < n; i++){
            minHeap.push(arr[i]);
            if(minHeap.size()>k){minHeap.pop();}
        }
        // print
        while (minHeap.size()>0){
            cout << minHeap.top() << " ";
            minHeap.pop();
        }cout << endl;
        
        
    }
    
}