vector<int> insertionSort(vector<int>& nums) {
        // 7 4 1 5 3

        for( int i = 0; i < nums.size()-1; i++){

            int j = i;
            while(j>0 && nums[j-1] >= nums[j]){
                int temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
                j--;
            }
        }
        return nums;
    }