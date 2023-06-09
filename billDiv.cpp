#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

int correctCalc(int n,int k,int arr[]){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(i==k){
            continue;
        }else{
            sum+=arr[i];
        }
    }
    sum /= 2;

    return sum;
    
}

int incorrectCalc(int n,int arr[]){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    sum /= 2;

    return sum;
    
}

bool isRight(int correct,int b){
    if(correct == b){
        return true;
    }else{
        return false;
    }
}

int main()
{
    // input
    int n,k;
    cin >> n >> k;
    int bill[n];
    for (int i = 0; i < n; i++){
        cin >> bill[i];
    }
    int moneyPaidByAnna;
    cin >> moneyPaidByAnna;

    int rightCalc = correctCalc(n,k,bill);
    int wrongCalc = incorrectCalc(n,bill);
    if(isRight(rightCalc,moneyPaidByAnna)){
        cout << "Bon Appetit";
    }else{
        cout << abs(rightCalc - wrongCalc);
    }

    return 0;
}