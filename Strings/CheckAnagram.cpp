#include<bits/stdc++.h>
using namespace std;


bool CheckAnagram(string s1, string s2, int n1, int n2){
    int freq[26]={0};
    

    for(int i = 0 ; i< n1; i++){
        freq[s1[i] - 'a']++;
    }

    for(int i = 0 ; i< n2; i++){
        freq[s2[i] - 'a']--;
    }

    for( int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }

    return true;
}


int main(){

    // listen
    // silent
    
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int n1 = s1.size();
    int n2 = s2.size();
    
    bool result = CheckAnagram(s1, s2, n1, n2);
    cout << result;
    return 0;
}

