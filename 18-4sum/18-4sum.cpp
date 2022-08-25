class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int low = j+1,high = nums.size()-1;
                  long long sum = (long long)target - (nums[i] + nums[j]); 
                  while(low<high){
                    if(nums[low]+nums[high]==sum){
                        s.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++,high--;
                    } 
                    else if(nums[low]+nums[high]<sum) low++;
                    else high--;
                }
          
            }
        }
        vector<vector<int>> ans (s.begin(),s.end());
        return ans;
    }
};