class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int tmp = 0 ;
        if(nums.empty())return 0;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] != nums[i+1]){
                tmp++;
                nums[tmp] = nums[i+1];
            }
        }
        return tmp+1;
    }
};
