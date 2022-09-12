class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int pw) {
  int pt = 0, max_pt = 0, i = 0, j = t.size() - 1;
  sort(begin(t), end(t));
  while (i <= j && pt >= 0) {
    if (t[i] <= pw) pw -= t[i++], max_pt = max(max_pt, ++pt);
    else pw += t[j--], --pt;
  }
  return max_pt;
}
};