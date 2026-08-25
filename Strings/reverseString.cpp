#include<bits/stdc++.h>
using namespace std;

void reverseString(char str[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(str[s++] , str[e--]);
    }

}

int main(){
    char str[10];
    cin >> str;
    int n = strlen(str);
    
    reverseString(str, n);
    cout << str;

    return 0;
}

