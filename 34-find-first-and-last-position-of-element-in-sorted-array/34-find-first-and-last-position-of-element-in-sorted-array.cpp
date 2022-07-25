class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> ret(2, -1);
		int lo = 0;
		int hi = nums.size()-1;
		while (lo <= hi)
		{
			int mid = lo + (hi - lo) / 2;
			if (nums[mid] >= target)
			{
                if(nums[mid] == target)
                {
                    ret[0] = mid;    
                }				
				hi = mid - 1;
				if ((hi >= 0)&&(nums[hi] < target))
					break;
			}
			else
			{
				lo = mid + 1;
				if ((lo < nums.size()) && (nums[lo] > target))
					break;
			}
		}
		if (ret[0] != -1)
		{
			lo = ret[0]; /* discard rest of the array in the left */
			hi = nums.size() - 1;

			while (lo <= hi)
			{
				int mid = lo + (hi - lo) / 2;
				if (nums[mid] > target)
				{
					hi = mid - 1;
					if ((hi >= 0) && (nums[hi] < target))
						break;
				}
				else
				{
					if(nums[mid] == target)
                    {
                        ret[1] = mid;    
                    }
					lo = mid + 1;
					if ((lo < nums.size()) && (nums[lo] > target))
						break;
				}

			}
		}

		return ret;
	}
};