// Problem Link: https://leetcode.com/problems/sum-of-subarray-minimums/

class Solution {
public:
  int sumSubarrayMins(vector<int> &A) {
    stack<pair<int, int>> in_stk_p, in_stk_n;
    // left is for the distance to previous less element
    // right is for the distance to next less element
    vector<long> left(A.size()), right(A.size());
    for (int i = 0; i < A.size(); i++) {
      left[i] = i + 1;
      right[i] = A.size() - i;
    }

    for (int i = 0; i < A.size(); i++) {
      // for previous less
      while (!in_stk_p.empty() && in_stk_p.top().first > A[i]) {
        in_stk_p.pop();
      }
      left[i] = in_stk_p.empty() ? i + 1 : i - in_stk_p.top().second;
      in_stk_p.push({A[i], i});

      // for next less
      while (!in_stk_n.empty() && in_stk_n.top().first > A[i]) {
        auto x = in_stk_n.top();
        in_stk_n.pop();
        right[x.second] = i - x.second;
      }
      in_stk_n.push({A[i], i});
    }

    constexpr int mod = 1e9 + 7;
    long res = 0;
    for (int i = 0; i < A.size(); i++) {
      res = (res + A[i] * left[i] * right[i]) % mod;
    }
    return res;
  }
};
