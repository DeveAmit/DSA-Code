class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        for(int i=0;i<=nums.size()-2;i+=2){
            max+=min(nums[i],nums[i+1]);
        }
        return max;
    }
};