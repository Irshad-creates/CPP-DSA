#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str, int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        if(str[s] != str[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}

int main(){
    string str;
    cin >> str;
    int n =  str.size();
    if(palindrome(str, n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

