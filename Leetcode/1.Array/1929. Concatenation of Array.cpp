class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
        int n = nums.size(), i;
        vector<int> ans(2*n);
        for (i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};


