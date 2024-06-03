#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vec;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int last = arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if(arr[i] >= last){
            arr[i+1] = arr[i];
        }else if(arr[i] < last){
            arr[i+1] = last;
            for (int j = 0; j < n; j++) {
                cout << arr[j] << " ";
            }
            count++;
            break;
        }
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    if(count == 0){
        arr[0] = last;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
    }
    return 0;
}