class Solution {
public:
   long long minimumPushes(const string &word) {
    long long n = word.size();
    long long ans = 0;
    for (long long i = 0; i < n; ++i) ans += (i / 8) + 1;
    return ans;
}
};