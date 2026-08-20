#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    if( n == 0) return 1;
        int  count= 0;
        while(n != 0){
            n /=10;
            count++;
        }
    cout << count;
    return 0;
}

int main(){
    int num ;
    cin >> num;
    countDigit(num);
    return 0;
}