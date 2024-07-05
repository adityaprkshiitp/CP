#include <bits/stdc++.h>
using namespace std;

int normal_binarySearch(int el,vector<int> &arr,int low, int high){
    int res = -1;
    while (low <= high){
        int mid =  low + (high - low)/2;
        if(el == arr[mid]){return arr[mid];}
        else if (el < arr[mid]){res = arr[mid]; high = mid - 1;}
        else { low = mid+1;}
    }
    return res;
}

int desc_binarySearch(int el,vector<int> &arr,int high, int low){
    int res = -1;
    while (high <= low){
        int mid =  high + (low - high)/2;
        if(el == arr[mid]){return arr[mid];}
        else if (el < arr[mid]){res = arr[mid]; high = mid + 1;}
        else {low = mid-1;}
    }
    return res;
}

int agnostic_binarySearch(vector<int> &arr, int el,int n){
    if(n==1 && el == arr[0]){
        return 0;
    }
    if(arr[0] < arr[n-1]){
        int low = 0;
        int high = arr.size() - 1;
        return normal_binarySearch(el,arr,low,high);
    }else{
        int high = 0;
        int low = arr.size() - 1;
        return desc_binarySearch(el,arr,high,low);
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
        int pos3 = agnostic_binarySearch(arr,el,n);
        cout << pos3 << '\n';
    }
}