// Problem Link: https://leetcode.com/problems/find-players-with-zero-or-one-losses/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> los_cnt;
        for (const auto& m : matches) {
            const auto winner = m.front(), loser = m.back();
            if (!los_cnt.count(winner)) {
                los_cnt[winner] = 0;
            }
            los_cnt[loser]++;
        }
        
        vector<vector<int>> res(2, vector<int>{});
        
        for (const auto [id, cnt] : los_cnt) {
            if (cnt > 1) continue;
            else if (cnt == 1) {
                res.back().push_back(id);
            } else {
                res.front().push_back(id);
            }
        }
        for (auto& vec : res) {
            sort(begin(vec), end(vec));
        }
        
        return res;
    }
};
