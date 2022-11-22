class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
     vector<int>res;
        recurison(root, 0, res);
        return res;
    }
    public:
    void recurison(TreeNode* root, int level, vector<int>&res){
        if(root==NULL) return;
        if(res.size()==level) res.push_back(root->val);
        recurison(root->right, level+1, res);
        recurison(root->left, level+1, res);
    }
};
