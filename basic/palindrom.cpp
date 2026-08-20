#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
        int reverse = 0 ;
        int dub = n;

        while( n > 0){
            int ld = n%10;
            reverse = reverse *10 + ld;
            n /= 10;
        }
        return reverse == dub;
}

int main(){
    int n ;
    cin >> n;
    if(isPalindrome(n)) cout << "true";
    else cout << "false";
    return 0;
}