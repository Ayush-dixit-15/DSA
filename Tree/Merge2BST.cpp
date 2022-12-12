#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
void inorder(TreeNode<int> *&root, vector<int>& ans){
    if(root == NULL){
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
TreeNode<int> *solve(int s, int e, vector<int> ans){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = solve(s, mid-1, ans);
    root->right = solve(mid+1, e , ans);
    return root;
}
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // Write your code here.
   vector<int> arr;
   inorder(root1,arr);
   inorder(root2,arr);
   sort(arr.begin(),arr.end());
   TreeNode<int> *root;
   int start=0;
   int end=arr.size()-1;
   
   root=solve(start,end,arr);
   return root;
}







void convertToDLL(TreeNode<int> *root, TreeNode<int>*& head){
    if(root == NULL)
        return;
    
    convertToDLL(root->right, head);
    
    root->right = head;
    if(head)
        head->left = root;
    head = root;
    
    convertToDLL(root->left, head);
}

TreeNode<int>* merge(TreeNode<int>* head1, TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;
    
    while(head1 && head2){
        if(head1->data < head2->data){
            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else{
           if(head == NULL){
               head = head2;
               tail = head2;
               head2 = head2->right;
           }
           else{
               tail->right = head2;
               head2->left = tail;
               tail = head2;
               head2 = head2->right;
           } 
        }
    }
    
    while(head1){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right; 
    }
        
    while(head2){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    
    return head;
}

int countNodes(TreeNode<int> *head){
    int n = 0;
    TreeNode<int> *temp = head;
    while(temp){
        n++;
        temp = temp->right;
    }
    
    return n;
}

TreeNode<int>* convertDLLtoBST(TreeNode<int>*& head, int n){
    if(n <= 0 || head == NULL)
        return NULL;
    
    TreeNode<int> *leftTree = convertDLLtoBST(head, n/2);
    
    TreeNode<int>* root = head;
    root->left = leftTree;
    head = head->right;
    
    root->right = convertDLLtoBST(head, n-n/2-1);
    
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    TreeNode<int> *head1 = NULL, *head2 = NULL;
    convertToDLL(root1, head1);
    convertToDLL(root2, head2);
    
    TreeNode<int> *head = merge(head1, head2);
    
    int n = countNodes(head);
    
    TreeNode<int> *ans = convertDLLtoBST(head, n);
    
    return ans;
}