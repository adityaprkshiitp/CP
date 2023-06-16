#include<bits/stdc++.h>
using namespace std;

int chocoFeast(int num, int c, int m){
    int sum = num;
    while(num/m){
        int wrapers = num/m;
        sum += wrapers;
        num -= wrapers * m;
        num += wrapers;
    }

    return sum;
}

int main(){

    int t; scanf("%d",&t);
    int arr[t];
    for (int i = 0; i < t; i++){
        int n,c,m; scanf("%d %d %d",&n,&c,&m);
        int num = n/c;
        arr[i] = chocoFeast(num,c,m);
    }

    for (int i = 0; i < t; i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}