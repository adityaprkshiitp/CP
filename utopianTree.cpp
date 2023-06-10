#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void utopianTree(int n,int j,int arr[]){
    int height = 1;
    for (int i = 0; i < n; i++){
        if(i%2==0){
            height *= 2;
        }else{
            height += 1;
        }
    }
    
    arr[j] = height;
}

int main(){

    // input
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        utopianTree(n,i,arr);
    }

    for (int i = 0; i < t; i++){
        cout << arr[i] << endl;
    }
    


    return 0;
}