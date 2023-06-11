#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 1; i < n + 1; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < n + 1; j++){
            if(i == arr[j]){
                for (int k = 1; k < n + 1; k++){
                    if(i == arr[arr[k]]){
                        printf("%d\n",k);
                    }
                }
                
            }
        }   
    }
    
    return 0;
}