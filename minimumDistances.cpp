#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int minimum = 1000;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                minimum = min(minimum,j-i);
            }
        }
        
    }
    if(minimum == 1000){
        cout << "-1";
    }else{
        cout << minimum;
    }
    return 0;
}