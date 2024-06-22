class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return findTotalSubArrays(nums, k) - findTotalSubArrays(nums, k - 1);
    }

    int findTotalSubArrays(vector<int>& nums, int k) {
        int i = 0, j = 0, subArrays = 0, countOdd = 0;

        while (j < nums.size()) {
            if (nums[j] % 2 != 0) { 
                countOdd++;
            }

            while (countOdd > k) { 
                if (nums[i] % 2 != 0) { 
                    countOdd--;
                }
                i++;
            }

            subArrays += j - i ; 
            j++;
        }
        return subArrays;
    }
};