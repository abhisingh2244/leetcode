class Solution {
public:
    	bool isPossible(vector<int>& nums) {
        using LastValueAndLength = pair<int, int>;
        priority_queue<LastValueAndLength, vector<LastValueAndLength>, greater<LastValueAndLength>> pq;
        const auto topAndPop = [&]() { const auto p = pq.top(); pq.pop(); return p; };
        for (const auto v: nums) {
            while (!empty(pq) && pq.top().first + 1 < v) {
                if (const auto[_, l] = topAndPop(); l < 3) {
                    return false;
                }
            }
            if (empty(pq) || pq.top().first == v ) {
                pq.emplace(v, 1);
            }
            else {
                const auto[val, l] = topAndPop();
                pq.emplace(v, l + 1);
            }
        }
        
        for (; !empty(pq) && pq.top().second >= 3;  pq.pop()) {}
        return empty(pq);
    }
};