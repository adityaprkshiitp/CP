#include <bits/stdc++.h>
using namespace std;

int binarySearch(int el,vector<int> &arr,int low, int high){
    while (low <= high){
        int mid =  low + (high - low)/2;
        if(mid > 0 && mid < arr.size()-1){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }else if(arr[mid-1] > arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else if(mid == 0){
            if(arr[0] > arr[1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == arr.size()-1){
            if(arr[arr.size()-1] > arr[arr.size()-2]){
                return arr.size()-1;
            }else{
                return arr.size()-2;
            }
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../error.txt", "w", stderr);
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int n,temp,el; cin >> n >> el;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        // int pos1 = normal_binarySearch(el,arr,0,n-1);
        // int pos2 = desc_binarySearch(el,arr,0,n-1);
        // cout << pos1 << endl;
        // cout << pos2 << endl;
        int pos3 = binarySearch(el,arr,0,n-1);
        cout << pos3 << '\n';
    }
}