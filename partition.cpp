#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vec;

void print(vec v) {
    for (int i = 0; i < v.size(); i++){
        printf("%d ",v[i]);
    }
}

void myPartition(int n, int arr[], int p){
    vec left;
    vec right;
    vec equal;
    for (int i = 0; i < n; i++){
        if(arr[i] < p){
            left.push_back(arr[i]);
        }else if(arr[i] > p){
            right.push_back(arr[i]);
        }else{
            equal.push_back(arr[i]);
        }
    }
    print(left);
    print(equal);
    print(right);
}

int main(){

    int n; scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pivot = arr[0];
    myPartition(n,arr,pivot);


    return 0;    
}