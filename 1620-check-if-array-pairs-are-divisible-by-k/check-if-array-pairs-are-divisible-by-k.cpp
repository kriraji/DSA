class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
         if (arr.size() % 2) return false;
        
        vector<int> count(k, 0);
        for (int a : arr) {
            int r = ((a % k) + k) % k;
            count[r]++;
        }
        
        if (count[0] % 2 != 0) return false;

        for (int i = 1; i <= k / 2; ++i) {
            if (i == k - i) {
                if (count[i] % 2 != 0) return false;
            } else if (count[i] != count[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};