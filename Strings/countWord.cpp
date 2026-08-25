#include<bits/stdc++.h>
using namespace std;

 int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word ;
    vector<string> words;
    string result = "";

    while(ss >> word){
        words.push_back(word);
    }

    for(int i = words.size()- 1; i>= 0 ; i--){
        result += words[i];
        if(i != 0 ) result += " ";
    }

    cout << result;
    return 0;
}

