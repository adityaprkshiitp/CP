#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define Max_Digits 10

string timeConversion(string s){
    
    if(s[8] == 'P'){
        int i = (int)s[0];
        int j = (int)s[1];
        
        i -= 48;
        j -= 48;
        if(i==0 && j==1){
            s[0] = '1';
            s[1] = '3';
        }
        if(i==0 && j==2){
            s[0] = '1';
            s[1] = '4';
        }if(i==0 && j==3){
            s[0] = '1';
            s[1] = '5';
        }if(i==0 && j==4){
            s[0] = '1';
            s[1] = '6';
        }if(i==0 && j==5){
            s[0] = '1';
            s[1] = '7';
        }if(i==0 && j==6){
            s[0] = '1';
            s[1] = '8';
        }if(i==0 && j==7){
            s[0] = '1';
            s[1] = '9';
        }if(i==0 && j==8){
            s[0] = '2';
            s[1] = '0';
        }if(i==0 && j==9){
            s[0] = '2';
            s[1] = '1';
        }
        if(i==1 && j==0){
            s[0] = '2';
            s[1] = '2';
        }
        if(i==1 && j==1){
            s[0] = '2';
            s[1] = '3';
        }
        // string t = to_string(i);
        // char const *y = t.c_str();
        // string s = to_string(j);
        // char const *z = s.c_str();
        // cout << "y : " << y << endl;
        // cout << "z : " << z << endl;
        // // s[0] = y;
        // // s[1] = z;
        // string a[2] = {y,z};
        
        // char o = y[0];
        // char p = z[0];
        
        // s[0] = o;
        // s[1] = p;
    }
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = '0';
            s[1] = '0';
        }
    }
    
    return s;
}
int main()
{
    string s;
    cin >> s;
    string a = timeConversion(s);
    for (int i = 0; i < 8; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}