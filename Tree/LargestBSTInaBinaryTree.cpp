#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
class Info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};
Info solve(TreeNode<int>* root, int& maxSize){
    if(root == NULL){
        return {INT_MIN, INT_MAX, true, 0 };
    }
    Info left = solve(root->left, maxSize);
    Info right = solve(root->right, maxSize);
    Info currNode;
    
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);
    
    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currNode.isBST = true;
    }
    else{
        currNode.isBST = false;
    }
    if(currNode.isBST){
        maxSize = max(maxSize, currNode.size);
    }
    return currNode;
}
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    int maxSize = 0;
    Info temp = solve(root, maxSize);
    return maxSize;
}
