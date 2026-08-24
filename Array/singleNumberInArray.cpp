int singleNumber(int nums){
        //your code goes here
        int xor = 0;
        for(int i = 0; i < nums.size(); i++){
            xor = xor^nums[i];
        }
        return xor;
    }

int main(){
    int n = 9;
    int nums[];
    for(int = 0; i <= n ; i++ ) cin >> nums[i] ;
    singleNumber(nums);
    return 0;
}