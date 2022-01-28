// Transform to Sum Tree.

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
    int solve(Node* root){
        if(root==NULL){
            return 0;
        }
        int l=solve(root->left);
        int r=solve(root->right);
        int sum=root->data + l + r;
        root->data=l+r;
        return sum;
    }
};
