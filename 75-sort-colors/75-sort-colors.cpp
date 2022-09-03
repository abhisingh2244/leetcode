class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size()-1,s=0;
        while(l<=r)
        {
        if(nums[l]==0)
        { swap(nums[s++],nums[l++]);
     
        }
         else if(nums[l]==2)
         { swap(nums[l],nums[r--]);
        
         }
          else
          {  l++;
          
        }
        }
        //sort(nums.begin(),nums.end());
        
    }
};