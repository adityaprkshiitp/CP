#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int designerPDF(int arr[],string word){
    int len = word.size();
    int count = word[0];
    int x = 0;
    for (int i = 1; i < len; i++){
        int count1 = word[i];
        count = max(count,count1);
        count -= 97;
        x = max(x,arr[count]);
        // cout << x << " ";
    }
    int height = x;
    int width = len;
    int area = height * width;
    
    return area;
}

int main(){

    // input
    int arr[26];
    for (int i = 0; i < 26; i++){
        cin >> arr[i];
    }
    string word;
    cin >> word;

    int result = designerPDF(arr,word);
    cout << result;


    return 0;
}