#include<bits/stdc++.h>
#include <math.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int n; cin >> n;
    int len=1,mul,carry=0,dig;
    int arr[1000] = {0};
    arr[0] = 1;
    for (int i = 2; i <= n; i++){
        for (int j = 0; j < len; j++){
            mul = i*arr[j] + carry;
            dig = mul%10;
            arr[j] = dig;
            carry = mul/10;
        }
        while(carry){
            dig = carry%10;
            arr[len] = dig;
            len++;
            carry /= 10;
        } 
    }
    for (int i = len-1; i >= 0; i--)
    {
        cout << arr[i];
    }
    
    
    return 0;
}