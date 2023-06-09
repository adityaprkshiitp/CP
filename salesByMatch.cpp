#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

void pop(int n,int arr[],int k){
    for (int i = k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n -= 1;
    
}

int sockMerchant(int n,int arr[]){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j] && arr[j] < 101){
                // cout << arr[j] << endl;
                pop(n,arr,j);
                count++;
                break;
            }else{
                //
            }
        }
    }
    
    return count;
    
}

int main()
{
    // input
    int static n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int result = sockMerchant(n,arr);
    cout << result;

    return 0;
}