class Solution {
public:
    int search(vector<int>& nums, int target) {
      int it= find(nums.begin(),nums.end(),target)-nums.begin();
        if(it<nums.size())
            return it;
        else
            return -1;
    }
};