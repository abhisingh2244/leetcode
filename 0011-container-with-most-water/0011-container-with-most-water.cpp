class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
    int left=0,right=n-1;
        int area=0;
        while(left<right)
        {
            int width=right-left,height=min(h[left],h[right]);
            int ans=width*height;
           area=max(area,ans);
            if(h[left]<h[right])left++;
            else if(h[left]>h[right]) right--;
            else
            {
            left++;
            right--;}
         }
        return area;
    }
};