    #include<bits/stdc++.h>
    using namespace std;

    string flipCase(string s, int n){
        for(int i = 0 ; i < n; i++){
            if(islower(s[i])){
            s[i] = toupper(s[i]);
            }else if(isupper(s[i])){
            s[i] =  tolower(s[i]);
            }
        }
        return s;
    }


    int main(){
        string s ;
        cin >> s;

        int n = s.size();

        string result = flipCase(s, n);
        cout << result;
        return 0;
    }

