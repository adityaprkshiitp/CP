// #include <bits/stdc++.h>
// #include <math.h>
// using namespace std;
// typedef unsigned long long int ll;


// ll savePrisoner(ll n,ll m,ll s){
//     ll arr[m];
//     ll k = 0;
//     ll i = s;
//     while (i < m + s){
//         if(i>n){
//             arr[k] = i - n;
//             k++;
//         }else{
//             arr[k] = i;
//             k++;
//         }
//         ++i;
//     }
    
//     cout << k << endl;

//     for (int i = 0; i < k; i++){
//         cout << arr[i] << " ";
//     }
//     if(arr[m-1] > n){
//         while(arr[m-1] > n){
//             arr[m-1] -= n;
//         }
//     }

//     // cout << endl << arr[m-1];
//     return arr[m-1];

// }

// int main()
// {
//     int t;
//     cin >> t;
//     ll arr[t];
//     for (int i = 0; i < t; i++){
//         ll n,m,s;
//         scanf("%d %d %d", &n,&m,&s);

//         arr[i] = savePrisoner(n,m,s);
//     }
    
//     // cout << endl;
//     for (int i = 0; i < t; i++){
//         printf("%d\n",arr[i]);
//     }
    

//     return 0;
// }

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    while(t--) {
        int n,m,s; cin >> n >> m >> s;
        --s; --m;
        s += m;
        s %= n;
        s++;
        cout << s << endl;
    }
    return 0;
}