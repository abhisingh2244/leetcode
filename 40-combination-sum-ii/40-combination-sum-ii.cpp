class Solution{
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
        {
            sort(candidates.begin(), candidates.end());
            vector<vector<int>> res;
            vector<int> vsum;
            add(candidates, 0, target, 0, vsum, res);
            return res;
        }

    protected:
        void add(vector<int>& cand, int i, int target, int sum, vector<int>& vsum, vector<vector<int>>& res)
        {
            for(int s = 0; i < cand.size(); ++i)
            {
                s = sum + cand[i];
                if(s > target) continue;
                vsum.push_back(cand[i]);
                if(s == target)
                    res.push_back(vsum);
                else
                    add(cand, i+1, target, s, vsum, res);
                vsum.pop_back();
                while(i+1 < cand.size() && cand[i] == cand[i+1]) ++i; // skip duplicates
            }
        }
};