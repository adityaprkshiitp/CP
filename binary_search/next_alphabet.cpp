#include <bits/stdc++.h>
using namespace std;

char normal_binarySearch(char el,vector<char> &arr,int low, int high){
    char res = 'a';
    while (low <= high){
        int mid =  low + (high - low)/2;
        if(el == arr[mid]){return arr[mid+1];}
        else if (el < arr[mid]){res = arr[mid]; high = mid - 1;}
        else { low = mid+1;}
    }
    return res;
}

char desc_binarySearch(char el,vector<char> &arr,int high, int low){
    char res = 'z';
    while (high <= low){
        int mid =  high + (low - high)/2;
        if(el == arr[mid]){return arr[mid-1];}
        else if (el < arr[mid]){res = arr[mid]; high = mid + 1;}
        else {low = mid-1;}
    }
    return res;
}

char agnostic_binarySearch(vector<char> &arr, char el,int n){
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
        int n; cin >> n;
        char temp,el; cin >> el;
        vector<char> arr;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        // int pos1 = normal_binarySearch(el,arr,0,n-1);
        // int pos2 = desc_binarySearch(el,arr,0,n-1);
        // cout << pos1 << endl;
        // cout << pos2 << endl;
        char pos3 = agnostic_binarySearch(arr,el,n);
        cout << pos3 << '\n';
    }
}