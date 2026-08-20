#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
        int sum = 0;
        int dub = n;
        
        while(n > 0){
            int ld = n%10;
            sum = sum + (ld*ld*ld);
            n/=10;
        }

        return sum == dub;
    }

int main(){
    int n;
    cin >> n;
    if(isArmstrong(n)) cout << "true";
    else cout << "false";

    return 0;

}