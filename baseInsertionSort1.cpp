#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int x = arr[n-1];
    int i = n-2;
    while(x <= arr[i] && i > -1 ){
        arr[i + 1] = arr[i];
        for (int j = 0; j<n; j++) {
            cout << arr[j] << " ";
        }
        arr[i+1] = max(arr[i],x);
        cout << endl;
        i--;
    }
    arr[i+1] = x;
    for (int j = 0; j<n; j++) {
        cout << arr[j] << " ";
    }
    
    return 0;
}
