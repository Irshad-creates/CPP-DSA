#include<bits/stdc++.h>
using namespace std;

void printNumbers(int n, int count){
    if ( count < 1)return;

    cout<< count << endl;
    count--;
    printNumbers(n, count);

}

int main(){
    int n;
    cin >> n;
    int count = n;
    printNumbers(n, count);
    return 0;
}