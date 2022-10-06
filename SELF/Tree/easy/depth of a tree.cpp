 int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int lft = maxDepth(root->left);
        int rgt = maxDepth(root->right);

        int ans = max(lft,rgt);
        retu
