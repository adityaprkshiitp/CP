#include <bits/stdc++.h>
using namespace std;

void print(int s, int arr[]) {
    for (int i = 0; i < s; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){

    // input
    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    static int count = 0;
    for (int i = 1; i < n; i++){
        int val = arr[i];
        int pre = i - 1;
        while (pre >= 0 && arr[pre] > val) {
            arr[pre + 1] = arr[pre];
            pre--;
            count++;
        }
        arr[pre + 1] = val;
        // print(n,arr);
    }
    // print(n,arr);
    cout << count;
    return 0;    
}