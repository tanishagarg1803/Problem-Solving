// Problem Link: https://leetcode.com/problems/jump-game/

class Solution:
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # At any given point find out max jump it can take 
        # if max_jump is less than current position then you can't reach to current position hence you can't reach to last position
        # else update max_jump until you reach that position
        max_reach = 0
        for i in range(len(nums)):
            if(max_reach < i):
                return False
            else:
                max_reach = max(max_reach, nums[i]+i)
                if(max_reach >= len(nums)):
                    return True
        return True
