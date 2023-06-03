#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int candles(unsigned int n,int arr[]){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == max){
            count ++;
        }
    }
    cout << count;
    return 0;
}

int main()
{
    unsigned int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    candles(n,arr);

    return 0;
}