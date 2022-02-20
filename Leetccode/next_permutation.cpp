// Problem Link: https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
         int i1, i2, i;
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            i1 = i;
            break;
        }
    }
    if (i < 0)
    {
        reverse(a.begin(), a.end());
    }
    else
    {
        for (int i = n - 1; i >= i1; i--)
        {
            if (a[i] > a[i1])
            {
                i2 = i;
                break;
            }
        }
        swap(a[i1], a[i2]);
        reverse(a.begin() + i1 + 1, a.end());
    }
    }
};
