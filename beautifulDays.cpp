#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int switchNumber(int n){
    int reverseInt = 0;
    int remainder;

    while(n != 0) {
        remainder = n % 10;
        reverseInt = reverseInt * 10 + remainder;
        n /= 10;
    }

    return reverseInt;
}

int beautifulDays( int arr[],int size,int k){
    int count = 0;
    for (int i = 0; i < size; i++){
        int reversed = switchNumber(arr[i]);
        int absolute = abs(reversed - arr[i]);
        if (absolute % k == 0){
            count++;
        }
    }
    
    return count;
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int size = m - n + 1;
    int arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = n + i;
    }
    
    int result = beautifulDays(arr,size,k);
    cout << result;

    return 0;
}