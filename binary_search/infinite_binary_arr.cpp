#include <bits/stdc++.h>
using namespace std;

int normal_binarySearch(int el,vector<int> &arr,int low, int high){
    int res = -1;
    while (low <= high){
        int mid =  low + (high - low)/2;
        if(el == arr[mid]){res = mid; high = mid-1;}
        else if (el < arr[mid]){high = mid - 1;}
        else {low = mid+1;}
    }
    return res;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,temp; cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        // int pos1 = normal_binarySearch(el,arr,0,n-1);
        // int pos2 = desc_binarySearch(el,arr,0,n-1);
        // cout << pos1 << endl;
        // cout << pos2 << endl;
        int el = 1;
        int low = 0;
        int high = 1;
        while(el > arr[high]){
            low = high;
            high = high*2;
        }
        int pos3 = normal_binarySearch(el,arr,low,high);
        cout << pos3 << '\n';
    }
}