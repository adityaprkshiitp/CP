#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int count = n;
    // int x = 1;
    for (int i = 0; i < n; i++){
        cout << count << endl;
        if(arr[i] == arr[i+1]){
            int x = 1;
            while(arr[i] == arr[i+1]){
                x++;
                i++;
            }
            count -= x;
            
        }else if(arr[i] != arr[i+1]){
            count--;
        }
    }
    

    return 0;
}