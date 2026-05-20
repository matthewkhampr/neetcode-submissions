class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (uint32_t i = 0; i<nums.size(); i++) {
            int z = 0;
            z = nums[0];
            nums[0] = nums[i];
            nums[i] = z;
            for (uint32_t j = 0; j<nums.size();j++) {
                if (nums[j] == nums[i]&&j!=i) return true;
            } 
        }
        return false;
    }
};