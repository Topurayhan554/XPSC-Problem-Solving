class Solution {
    public:
        vector<vector<int>> ans;
        vector<int> path;
        
        void dfs(vector<int>& c, int t, int idx) {
            if (t == 0) {
                ans.push_back(path);
                return;
            }
            for (int i = idx; i < c.size(); i++) {
                if (i > idx && c[i] == c[i - 1]) continue;
                if (c[i] > t) break;
                path.push_back(c[i]);
                dfs(c, t - c[i], i + 1);
                path.pop_back();
            }
        }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
        {
            sort(candidates.begin(), candidates.end());
            dfs(candidates, target, 0);
            return ans;
        }
};