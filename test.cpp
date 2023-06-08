#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int migBirds(int n,int arr[]){
    int arr1[5];
    // for (int i = 0; i < 5; i++){
    //     arr1[i] = count(n,arr,i+1);
    // }
    int c1 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 1){
            c1++;
        }
    }

    int c2 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 2){
            c2++;
        }
    }
    
    int c3 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 3){
            c3++;
        }
    }

    int c4 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 4){
            c4++;
        }
    }

    int c5 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 5){
            c5++;
        }
    }
    
    int maximum = 0;
    int max1 = max(maximum,c1);
    int max2 = max(max1,c2);
    int max3 = max(max2,c3);
    int max4 = max(max3,c4);
    int max5 = max(max4,c5);

    return max5;

}

int main(){

    // input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // sort(arr[0],arr[n]);

    int arr1[5];
    // for (int i = 0; i < 5; i++){
    //     arr1[i] = count(n,arr,i+1);
    // }
    int c1 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 1){
            c1++;
        }
    }

    int c2 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 2){
            c2++;
        }
    }
    
    int c3 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 3){
            c3++;
        }
    }

    int c4 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 4){
            c4++;
        }
    }

    int c5 = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 5){
            c5++;
        }
    }
    
    if(c1 >= c2 && c1 >= c3 && c1 >= c4 && c1 >= c5){
        cout<<"1";
    }else if(c2 >= c3 && c2 >= c4 && c2 >= c5){
        cout<<"2";
    }else if(c3 >= c4 && c3 >= c5){
        cout << "3";
    }else if(c4 >= c5){
        cout << "4";
    }else{
        cout<< "5";
    }
    
    return 0;
    
}