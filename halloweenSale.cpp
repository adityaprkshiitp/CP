#include<bits/stdc++.h>
using namespace std;

int main(){

    int p,d,m,s; scanf("%d %d %d %d",&p,&d,&m,&s);
    int sum = p;
    int count = 0;
    int i = 1;
    while (sum <= s){
        if(p - i*d >= m){
            sum += (p - (i*d));
            i++;
            count++;
            // printf("%d ",sum);
        }else{
            sum += m;
            count++;
            // printf("%d ",sum);
        }
    }
    printf("%d",count);

    return 0;
}