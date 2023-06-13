#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int t; scanf("%d",&t);
    for (int i = 0; i < t; i++){
        ll a,b; scanf("%llu %llu",&a,&b);
        int squared = sqrt(a);
        double baka = sqrt(a);
        if(squared != baka){
            squared += 1;
        }
        int revSquared = sqrt(b);
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