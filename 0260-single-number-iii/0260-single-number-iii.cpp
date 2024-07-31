#include <vector>
#include <numeric>
#include <functional>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int XOR = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        int i = 0;
        while (((XOR >> i) & 1) == 0)
            i++;
        int a = 0, b = 0;
        for (int x : nums) {
            if (((x >> i) & 1) == 0) {
                a ^= x;
            } else {
                b ^= x;
            }
        }
        return {a, b};
    }
};
