#include<bits/stdc++.h>
using namespace std;

int getlength(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char str[10];
    cin >> str;

    cout << "your length is :" << getlength(str);

    return 0;
}