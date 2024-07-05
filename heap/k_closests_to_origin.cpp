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
        vector<vector<int>> arr(n,vector<int>(2));
        for (int i = 0; i < n; i++){
            cin >> arr[i][0] >> arr[i][1];
        }

        //maxHeap
        priority_queue<pair<int,pair<int,int>>> maxHeap;
        for (int i = 0; i < n; i++){
            int x =arr[i][0];
            int y = arr[i][1];
            int distance = pow(x,2) + pow(y,2);
            maxHeap.push({distance,{x,y}});
            if(maxHeap.size()>k){maxHeap.pop();}
        }
        
        // print
        while (maxHeap.size()>0){
            cout << maxHeap.top().first << ' ';
            cout << maxHeap.top().second.first << ' ' << maxHeap.top().second.second << endl;
            maxHeap.pop();
        }
        
        
    }
    
}