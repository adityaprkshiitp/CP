#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool isWave(int n,long int arr[]){
    int count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] < arr[i+1] && arr[i+1] > arr[i+2] || arr[i] > arr[i+1] && arr[i+1] < arr[i+2]){
            continue;
        }else{
            count++;
        }
    }
    if(count == 0){
        return true;
    }else{
        return false;
    }
}

int main()
{   
    int n,m;
    cin >> n >> m;
    long int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long int static count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == -1){
            for (int j = 1; j < m; j++){
                arr[i] = j;
                // if(isWave(n,arr)){

                //     count++;
                // }
            }
            
        }
    }

    cout << count;
    
    
    return 0;
}