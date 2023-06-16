#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    int d; scanf("%d",&d);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j++){
            if(arr[j] - arr[i] == d){
                //
                for (int k = j+1; k < n; k++){
                    if(arr[k] - arr[j] == d){
                        count++;
                    }
                }
            }
        }
        
    }
    cout << count;
    
}