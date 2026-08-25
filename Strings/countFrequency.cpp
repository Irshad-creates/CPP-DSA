#include<bits/stdc++.h>
using namespace std;

void countFrequency(string str){
    int freq[26] = {0};

    for(int i = 0; i < str.size(); i++){
        freq[str[i] -'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] > 0 ) {
            cout << (char)('a' + i) << " = " << freq[i] << endl;
        }
    }

    
}


int main(){
    string str;
    cin >> str;

    countFrequency(str);

    return 0;
}

