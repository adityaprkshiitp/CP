#include <bits/stdc++.h>

using namespace std;

#define MAX_STRING 1000;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    int arr[26] = {0};
    int n = s.size();
    // arr[s[0] - 'A']++;
    for (int i = 1; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z'){arr[s[i]-'a']++;}
        if(s[i] >= 'A' && s[i] <= 'Z')