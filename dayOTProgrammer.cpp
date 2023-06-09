#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

bool isLeapGregorian(int y){
    if((y%4==0 && y%100!=0) || y%400==0){
        return true;
    }else{
        return false;
    }
}

bool isLeapJulian(int y){
    if(y%4==0){
        return true;
    }else{
        return false;
    }
}

void timeTravel(int y){
    if(y>1918){
        if(isLeapGregorian(y)){
            cout <<"12.09." << y;
        }else{
            cout <<"13.09." << y;
        }
    }else if(y<1918){
        if(isLeapJulian(y)){
            cout << "12.09." << y;
        }else{
            cout << "13.09." << y;
        }
    }else{
        cout << "26.09." << y;
    }
}

int main()
{
    // input
    int y;
    cin >> y;
    timeTravel(y);

    return 0;
}