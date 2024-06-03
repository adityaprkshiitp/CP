#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){cin >> arr[i];}
    int count = 0;
    int last = arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if(arr[i] >= last){
            arr[i+1] = arr[i];
            for (int j = 0; j < n; j++) {
                cout << arr[j] << " ";
            }cout << endl;
        }else if(arr[i] < last){
            arr[i+1] = last;
            count++;
            for (int j = 0; j < n; j++) {
                cout << arr[j] << " ";
            }cout << endl;
            break;
        }
    }
    if(count == 0){
        arr[0] = last;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}