#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
        int num=0, i=0, sign=1;
        //here we have taken nums as the final answer, 
        //i for iterating the string and sign as positive 

        //firstly, ignore the blank spaces
        while(s[i]==' '){
            i++;
        }

        //secondly, we will find a sign and we will multiply by sign at the 
        //end
        if(i<s.size() && (s[i]=='-' || s[i]=='+')){
            sign = s[i]=='+'? 1:-1;
            i++;
        }
        //thirdly, we will traverse through digits
        while(i<s.size() && isdigit(s[i])){
            //out of bound
            if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
                return sign == -1? INT_MIN : INT_MAX;
            }

            num=num*10+ (s[i]-'0');
            i++;
        }
        return num*sign;
    }

int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while (t--){
        string s;
        getline(cin,s);
        cout << myAtoi(s) << endl;
    }
    return 0;
}