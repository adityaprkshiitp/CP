#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    // input
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);

    cout << arr[n - 1] << endl;

    if(k >= arr[n-1]){
        cout << "0";
    }else{
        cout << arr[n-1] - k;
    }

    return 0;
}