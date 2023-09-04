/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    boolean check(TreeNode left, TreeNode right){
        if(left == null && right == null)   return true;
        if(left == null || right == null)   return false;
        return left.val == right.val && 
            check(left.left, right.right) &&
            check(left.right, right.left);
    }


    public boolean isSymmetric(TreeNode root) {
        if (root == null) return true;
        if (root.left == null && root.right == null) return true;
        return check(root.left, root.right);
    }

    /*
    
     public boolean pre(TreeNode p, TreeNode q){
        if(p == null && q == null)  return true;
        if(p == null || q == null)  return false; 
        if(p.val != q.val) return false;
        return pre(p.left, q.left) && pre(p.right, q.right);
    }
     */
}
