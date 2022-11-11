class Solution {
public:
    //Inserts val into the BST and returns its root
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //Inserts val at the end of the tree
        if (root == NULL) {
            return new TreeNode(val);
        }

        //Goes to the left subtree if val is less than the current node
        if (val < root->val) {
            root->left = insertIntoBST(root->left,val);
        }

        //Goes to the right subtree if val is greater than the current node
        else {
            root->right = insertIntoBST(root->right,val);
        }

        //Returns the current node
        return root;
    }   
};