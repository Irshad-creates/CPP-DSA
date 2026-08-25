#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string str){
    int n = str.size();

    bool seen[26] = {false};
    string result = "";

    for(int i =0; i < n; i++){
        int index = str[i]- 'a';

        if(seen[index] == false){
            result += str[i];
            seen[index] = true;
        }
    }
    return result;
}



int main(){
    string str;
    cin >> str;

    string result = removeDuplicates(str);
    cout << result;

    return 0;
}

