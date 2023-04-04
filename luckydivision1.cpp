#include<iostream>
using namespace std;
int main()
{
    int n,x=n/4,y=n/7;
    cin >> n;
    while(n<=1000 && n>=1){
        if(n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 474 == 0 || n % 447 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0)
        {
            cout<<"YES";
        }
        else if((n%4==0 || n%7==0) && (x%2==0 || y%2==0)){
            cout<<"YES";
        }
        else 
        {
            cout<<"NO";
        }
        break;
    }
    return 0;
}