#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;

// int isSquare(ll a, ll b){
//     int count = 0;
//     int x = sqrt(a);
//     for (ll i = a; i <= b ; i++){
//         // cout << i << " ";
//         for (int j = x; j < 31624; j++){
//             if( i / (j*j) == 1  && i % (j*j) == 0){
//                 count = j;
//                 // cout << j << " ";
//                 return count;
//             }
//         }   
//     }
//     return count;
// }

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("error.txt", "w", stderr);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t; scanf("%d",&t);
    for (int i = 0; i < t; i++){
        ll a,b; scanf("%llu %llu",&a,&b);
        int squared = sqrt(a);
        double baka = sqrt(a);
        if(squared == baka){
            // 
        }else{
            squared += 1;
        }
        // cout << squared << " ";
        int revSquared = sqrt(b);
        // cout << revSquared << " ";
        if(squared == revSquared){
            cout << "1" << endl;
        }else if(squared < revSquared){
            cout << revSquared - squared  + 1 << endl;
        }else{
            cout << "0" << endl;
        }
    }
    
    return 0;    
}