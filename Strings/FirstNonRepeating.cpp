#include<bits/stdc++.h>
using namespace std;

char countRepeating(string str){
    int n = str.size();
    int freq[26]= {0};

    for(int i =0; i < n; i++){
        freq[str[i] - 'a']++;
    }

    for(int i = 0; i < n; i++){
        if(freq[str[i]- 'a'] == 1){
            return str[i];
        }
    }
    return '#';
}

int main(){
    string str;
    cin >> str;

    char result = countRepeating(str);
    if(result == '#') cout<< "all repeating";
    else cout<< result;
    return 0;
}

