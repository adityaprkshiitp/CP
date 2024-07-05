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

        // minHeap
        priority_queue<int,vector<int>,greater<int>> minHeap;
        int a = 0;
        for (int i = 0; i < n; i++){
            minHeap.push(arr[i]);
            if(minHeap.size()>k){
                arr[a] = minHeap.top();
                a++;
                minHeap.pop();
            }
        }
        // rest in heap
        while (minHeap.size()>0){
            arr[a] = minHeap.top();
            a++;
            minHeap.pop();
        }

        //print
        for (int i = 0; i < a; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
        
    }
    
}