class Solution {
    vector<int> id;
    vector<int> size;
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return n;
        size = vector<int>(n,1);
        for(int i = 0; i < n; i++) {
            id.push_back(i);
        }
        unordered_map<int,int> record;
        for(int i = 0 ; i < n; i++) {
            if(record.find(nums[i]) != record.end()) continue;
            record[nums[i]] = i;
            if(record.find(nums[i]-1) != record.end()) {
                unionSet(i,record[nums[i]-1]);
            }
            if(record.find(nums[i]+1) != record.end()) {
                unionSet(i,record[nums[i]+1]);
            }
        }
        int res = *max_element(size.begin(),size.end());
        return res;
    }
    
    int find(int p) {
        while(p != id[p]) {
            id[p] = id[id[p]];
            p = id[p];
        }
        return p;
    }
    void unionSet(int a, int b) {
        int i = find(a);
        int j = find(b);
        if(i == j) return;
        if(size[i] > size[j]) {
            id[j] = i;
            size[i] += size[j];
        } else {
            id[i] = j;
            size[j] += size[i];
        }
    }
};