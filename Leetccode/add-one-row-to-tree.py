// Problem Link: https://leetcode.com/problems/add-one-row-to-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        def traverse(node,left):
            if node is None:
                return
            if left==1:
                node.left=TreeNode(val,node.left,None);
                node.right=TreeNode(val,None,node.right);
                return node
            node.left=traverse(node.left,left-1);
            node.right=traverse(node.right,left-1);
            return node;
        newRoot=TreeNode(-1,root)
        traverse(newRoot,depth)
        return newRoot.left
    
        
