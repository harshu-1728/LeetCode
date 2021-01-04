# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def lnode(self, root, x, lvl):
        if root:
            if root.val == x:
                return lvl
            level = self.lnode(root.left, x, lvl+1)
            if level != 0:
                return level
            return self.lnode(root.right, x, lvl+1)
        return 0

    def sibling(self, root, x, y):
        if root:
            if root.left and root.right:
                return ((root.left.val == x and root.right.val == y) or
                        (root.left.val == y and root.right.val == x) or
                        self.sibling(root.left, x, y) or
                        self.sibling(root.right, x, y))
            return (self.sibling(root.left, x, y) or
                    self.sibling(root.right, x, y))

    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        lx = self.lnode(root, x, 0)
        ly = self.lnode(root, y, 0)
        if lx != ly and not self.sibling(x, y):
            return True
        return False