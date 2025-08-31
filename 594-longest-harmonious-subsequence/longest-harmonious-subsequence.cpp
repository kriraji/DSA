class Solution {
public:
    int findLHS(vector<int>& nums) {
         sort(nums.begin(), nums.end()); 
        int n = nums.size();
        int left = 0, right = 0;
        int maxlen = 0;

        while (right < n) {
            while (nums[right] - nums[left] > 1) {
                left++;
            }

            if (nums[right] - nums[left] == 1) {
                maxlen = max(maxlen, right - left + 1);
            }

            right++;
        }

        return maxlen;
    }
};