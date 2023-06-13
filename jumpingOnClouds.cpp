#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n,k; scanf("%d %d", &n, &k );
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    if(arr[0] == 1){
        count = 2;
    }else{
        count = 0;
    }
    int i = k;
    if(i%n == 0){
        count++;
    }
    while ( i%n != 0 ){
        count++;
        // cout << count << " ";
        if(arr[i%n] == 1){
            count += 2;
            // cout << count << " ";
        }
        i += k;
        if(i%n == 0){
            count++;
        }
    }
    
    printf("%d",100 - count);
    
    return 0;
}