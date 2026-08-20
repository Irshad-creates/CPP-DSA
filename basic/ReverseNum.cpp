#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
        int revNum = 0;
        int lastnum = 0;

        if(n == 0 )return 0;

        while( n > 0){
            lastnum = n % 10 ;
            revNum = (revNum *10) +  lastnum;
            n /=10;
        }
        return revNum;
    }
int main(){
    int n ;
    cin >> n ;
    int result = reverseNumber(n);
    cout << result;
}