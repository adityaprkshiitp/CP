#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int ll;

void findDigit(){
    ll n;
    scanf("%lld",&n);
    int count = 0;
    ll x = n;
    while (x > 0) {
        ll c = x % 10;
        x = x / 10;
        if (c != 0 && n % c == 0) {
            ++count;
        }
    }
    printf("%d\n",count);
}

int main(){
    int t; scanf("%d",&t);
    for (int i = 0; i < t; i++){
        findDigit();
    }
    return 0;
}