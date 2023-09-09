class Solution
{
public:
    int sum=INT_MIN;
    // first find the height
    int findHeightOfTree(Node*root){
        if(root==NULL) return 0;
        int left=findHeightOfTree(root->left);
        int right=findHeightOfTree(root->right);
        return 1+max(left, right);
    }
    // now find the sum and call the function recursivly
    void find(Node*root, int height, int level){
        if(root==NULL) return;
        // sum
        if(root->left){
            root->left->data+=root->data;
        }
        if(root->right){
            root->right->data+=root->data;
        } 
        // call the function recursivly and increase the level 
        find(root->left, height, level+1);
        find(root->right, height, level+1);
        // if level==height that means we have reached the maximum path
        if(level==height){
            sum=max(sum, root->data);
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int heightOfTree=findHeightOfTree(root);
        find(root, heightOfTree, 1);
        return sum;
    }
};
