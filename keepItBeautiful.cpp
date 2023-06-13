#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int ll;

void pop(int n,ll arr[],int k){
    for (int i = k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n -= 1;
    
}

int main(){

    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int q; cin >> q;
        ll arr[q];
        for (int i = 0; i < q; i++){
            cin >> arr[i]; 
        }
        ll maximum = 0;
        ll minimum = arr[0];
        int count = 0;
        for (int i = 0; i < q; i++){
            maximum = max(maximum,arr[i]);
            if(arr[i] < minimum && count == 0){
                count++;
                cout << "1";
            }else{
                cout << "0";
                pop(q,arr,i);
            }
            
            cout << endl; 
        }
        
        cout << endl;
    }
    

    return 0;
}