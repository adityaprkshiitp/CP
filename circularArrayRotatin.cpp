#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,k,q; cin >> n >> k >> q;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int query[q];
    int result;
    int i = q;
    while (i--){
        cin >> query[i];
        result = query[i] - k;
        while(result < 0){
            result += n;
        }
        cout << arr[result] << endl;
    }
    

}