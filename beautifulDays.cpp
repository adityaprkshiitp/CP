#include <bits/stdc++.h>
using namespace std;
int reverseDigits(int num) { 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
int main(int argc, char const *argv[]){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a,j,k; cin >> a >> j >> k;
    int count = 0;
    for (int i = a; i <= j; i++) {
        double reverse = reverseDigits(i);
        double difference = abs(i-reverse);
        double check = difference/k;
        double a_int = static_cast<int>(check);
        if(a_int == check){count++;}
    }
    cout << count;
    
    return 0;
}
