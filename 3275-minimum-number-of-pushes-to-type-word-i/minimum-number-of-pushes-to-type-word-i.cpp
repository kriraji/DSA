#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumPushes(const string &word) {
        long long n = (long long)word.size();
        long long groups = n / 8;      // number of full 8-char groups
        long long rem    = n % 8;      // remaining chars in partial group
        // sum of full groups: 8*(1 + 2 + ... + groups) = 8 * groups*(groups+1)/2
        // plus remainder: rem * (groups + 1)
        long long ans = 8 * groups * (groups + 1) / 2 + rem * (groups + 1);
        return ans;
    }
};
