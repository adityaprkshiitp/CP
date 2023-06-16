#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef vector<int> v;
typedef long long int ll;

int main(){
    int t; scanf("%d",&t);
    for (int i = 0; i < t; i++){
        ll b,w; scanf("%lld %lld",&b,&w);
        ll bc,wc,z; scanf("%lld %lld %lld",&bc,&wc,&z);
        ll result;
        if(wc+z<bc){
            // cost of white is less
            result = (w*wc) + (b*(wc+z));
        } else if(bc+z<wc){
            //cost of blCK IS less
            result = (b*bc) + (w*(bc+z));
        } else {
            result = (b*bc) + (w*wc);
        }
        printf("%lld\n",result);
    }
    
    return 0;
}