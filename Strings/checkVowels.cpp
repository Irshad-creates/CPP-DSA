#include<bits/stdc++.h>
using namespace std;

pair<int,int> checkVowels(string str,int n){
    int vowels = 0; 
    int constrant = 0;

    for(int i =0; i < n; i++){
        if(str[i] == 'a' || str[i] == 'e' ||  str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u'  ) {
            vowels++;
        }
        else {
            constrant++;
        }
    }
    return {vowels, constrant};
}


int main(){
    string str;
    cin >> str;

    int n = str.size();
    pair<int,int> result = checkVowels(str, n);
    cout << "Vowels: " << result.first << endl;
    cout << "Consonants: " << result.second << endl;

    return 0;
}

