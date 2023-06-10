#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void angryProffesor( int n, int k,int arr[],string result[],int t){
    int count = 0;
    for (int i = n-1; i >= 0; i--){
        if(arr[i] <= 0){
            count++;
            // cout << count;
        }
    }
    // cout << endl;
    // cout << count << endl;
    if(count >= k){
        result[t] = "NO";
    }else{
        result[t] = "YES";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    string result[t*3];
    for(int i = 0; i < t; i++){
        int n,k;
        cin >> n >> k;
        int arrivalTime[n];
        for (int i = 0; i < n; i++){
            cin >> arrivalTime[i];
        }
        sort(arrivalTime,arrivalTime + n);
        angryProffesor(n,k,arrivalTime,result,i);
    }

    for (int i = 0; i < t; i++){
        cout << result[i] << endl;
    }
    
    return 0;
}