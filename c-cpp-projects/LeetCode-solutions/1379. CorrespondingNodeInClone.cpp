/**
 * @brief 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
 *
 */
* Definition for a binary tree node.
* struct TreeNode {
    *int val;
    *TreeNode* left;
    *TreeNode* right;
    *TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    *
};
*/

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        if (original == target)
            return cloned;
        if (original == NULL)
            return original;
        TreeNode* lroot, * rroot;
        lroot = getTargetCopy(original->left, cloned->left, target);

        rroot = getTargetCopy(original->right, cloned->right, target);

        if (lroot != NULL)
            return lroot;
        else if (rroot != NULL)
            return rroot;
        else
            return nullptr;
    }
};
