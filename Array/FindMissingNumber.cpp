#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums){
    int n = nums.size();
    int sum = n * ( n +1)/2;
    int actSum = 0;
    for( int i = 0 ; i<n; i++){
        sum += nums[i];
    }

    return  sum - actSum;

}

int main(){
    vector <int> nums;
    return 0;
}