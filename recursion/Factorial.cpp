#include<bits/stdc++.h>
using namespace std;

void helper(int n, int count, int &fact){
        if(count < 1) return ;

        fact *= count;
        count--;
        helper(n, count, fact);
    }
int main() {
        int n;
        cin >> n;
        int fact =1;
        helper(n, n, fact);
        cout << fact;
        return 0;
    }