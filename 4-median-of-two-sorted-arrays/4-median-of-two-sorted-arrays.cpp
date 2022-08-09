class Solution {
    double GetAvr(int x, int y)
    {
        return (double)(x + y)/2.0;
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            swap(nums1, nums2);
        
        int n = nums1.size();
        int m = nums2.size();
        
        int inf = 1e9;
        
        int lb = -1, rb = n;
        int half = (n + m + 1) >> 1;
        
        //the idea is to find ( binsearch ) partition ( index of nums1 inside [lb, rb) ) 
		//such that every element on left part is leq to the elem from right part. 
		//Size of left part should be = half
        
        while(rb > lb)
        {
            //last index of partition in nums1
            int med1 = (lb + rb) >> 1;
            //last index of partition in nums2
            int med2 = half - med1 - 2;
            
            int l1 = med1 >= 0 ? nums1[med1] : -inf;
            int l2 = med2 >= 0 ? nums2[med2] : -inf;
            int r1 = med1 + 1 < n ? nums1[med1 + 1] : inf;
            int r2 = med2 + 1 < m ? nums2[med2 + 1] : inf;
            
            //found partition
            if(l1 <= r2 && l2 <= r1)
            {
                return ((n + m) & 1) ? max(l1, l2) : GetAvr(max(l1, l2), min(r1, r2));
            }
            
            //too right partition
            if(l1 > r2)
            {
                rb = med1;
            }
            else
            {
                lb = med1;
            }
        }
        
        //just for leetcode compiler to not argue
        return -1;
    }
};