#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long int max(int n,long int arr[]){
    long int max = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

long int actualFunction ( int n, int k, long int arr[]){
    long int hehe = 0;
    
    if(k<n){
        //sort
        sort(arr,arr + n);
        long int avg[k];
        int divide = n/k;
        int u = 0;

        // for finding avg along the array
        for (int i = 0; i < n; i+=divide){
            if(i+divide-1 < n){
                avg[u] = (arr[i] + arr[i + divide - 1])/2;
                u++;
                // cout << avg[i];
            }
        }
        
        int o = 0;
        long int maximum[n];
        int j = 0;

        // getting the max distance for every interval with corresponding avg
        for (int i = 0; i < k; i++){
            while (j<n){
                maximum[o] = abs(avg[i] - arr[j]);
                o++;
                j++;
                if(j>divide*(i+1) - 1){
                    break;
                }
            }
        }

        // max of all max distances over all intervals
        long int tobeReturned = max(n,maximum);
        hehe += tobeReturned;
    } else if(k>n){

    }

    return hehe;

}

int main(){   
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    long int hoho[t];

    //input
    for (int a = 0; a < t; a++){
        int n,k;
        cin >> n >> k;
        long int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        hoho[a] = actualFunction(n,k,arr);
        // cout << hoho[a]; 
    }

    //output
    for (int i = 0; i < t; i++){
        cout << hoho[i] << endl;
    }
    
    
    
    return 0;
}