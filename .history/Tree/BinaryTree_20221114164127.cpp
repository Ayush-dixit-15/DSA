#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
     public:
      int data;
      Node* left;
      Node* right;
      Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
      }
};
Node* buildTree(Node* root){
    cout<< "Enter the data "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    
    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data to be inserted in the left of "<< data <<endl;
    root->left =  buildTree(root->left);
    cout<<"Enter the data to be inserted in the right of "<< data <<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node* root){
queue<Node*> tree;
tree.push(root);
tree.push(NULL);
while(!tree.empty()){
    Node* temp = tree.front();
    tree.pop();
    if(temp == NULL){
        cout<< "\t"<<endl;
        if(!tree.empty()){
            tree.push(NULL);
        }
    }
    else{
         cout<<"\t"<<temp->data<<" ";
        if(temp->left){
            tree.push(temp->left);
        }
        if(temp->right){
            tree.push(temp->right);
        }       
    }
 }
}
void reverseLevelOrderTraversal(Node* root){
    queue<Node*>tree;
    stack<int>st;
    tree.push(root);
    tree.push(NULL);
    while(!tree.empty()){
        Node*temp = tree.front();
        tree.pop();
        if(temp==NULL){
            if(!tree.empty()){
                tree.push(NULL);
                st.push(-1);
            }
        }
        else{
            st.push(temp->data);
            if(temp->left){
               tree.push(temp->left);
            }
            if(temp->right){
                tree.push(temp->right);
            }
        }
    }
    while(!st.empty()){
        int remp = st.top();
        if(remp==-1){
          cout<<endl;
        }
        else{
            cout<<remp<<" ";
        }
        st.pop();
    }
}
void Inorder(Node*root){
    if(root==NULL){
        return ; 
    }
    Inorder(root->left);
    cout<< root->data <<" ";
    Inorder(root->right);
}
void Preorder(Node*root){
    if(root==NULL){
        return ; 
    }
    cout<< root->data <<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node*root){
    if(root==NULL){
        return ; 
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<< root->data <<" ";
}
void builFromLevelOrder(Node* &root){
  queue<Node*> tree;
  cout<<"Enter the data for the root"<<endl;
  int data;
  cin>>data;
  root = new Node(data);
  tree.push(root);
  while(!tree.empty()){
     Node* temp = tree.front();
     tree.pop();
     cout<<"Enter the data for the left node of "<< temp->data<<endl;
     int leftData;
     cin>>leftData;
     if(leftData!=-1){
        temp->left = new Node(leftData);
        tree.push(temp->left);
     }
     cout<<"Enter the data for the right node of "<< temp->data<<endl;
     int rightData;
     cin>>rightData;
     if(rightData!=-1){
        temp->right = new Node(rightData);
        tree.push(temp->right);
     }
  }
}
int main(){
Node* root = NULL;
builFromLevelOrder(root);
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
// root = buildTree(root);
// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
levelOrderTraversal(root);
// // reverseLevelOrderTraversal(root);
// cout<<"inorder traversal:"<<endl;
// Inorder(root);
// cout<<"preorder traversal"<<endl;
// Preorder(root);
// cout<<"postorder traversal"<<endl;
// Postorder(root);

return 0;
}





// ANOTHER SOLUTION
//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    void createMapping(int in[], map<int, int> &nodeToIndex, int n){
        for(int i = 0; i<n ;i++){
           nodeToIndex[in[i]] = i;
        }
     
    }
    Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex){
        if(index >=n || inorderStart > inorderEnd){
            return NULL;
        }
        int element = pre[index++];
        Node* root = new Node(element);
        int pos = nodeToIndex[element];
        
        root->left = solve(in , pre, index, inorderStart, pos-1, n, nodeToIndex );
        root->right = solve(in, pre, index, pos+1, inorderEnd, n, nodeToIndex);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        map<int, int> nodeToIndex;
        createMapping(in, nodeToIndex,n);
        Node* ans = solve(in , pre, preOrderIndex, 0, n-1, n, nodeToIndex);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends