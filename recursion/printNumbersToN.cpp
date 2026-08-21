#include<bits/stdc++.h>
using namespace std;

void printNumbers(int n, int count){

    if(count > n){
        return;
    }
    cout << count << endl; 
    count++;
    printNumbers(n, count);
}
int main(){
    int n;
    int count = 1;
    cin >> n ;
    printNumbers(n, count);
    return 0;
}