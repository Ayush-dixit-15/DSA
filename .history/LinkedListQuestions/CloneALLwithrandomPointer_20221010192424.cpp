// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;
// /* Link list Node */
// struct Node {
//     int data;
//     Node *next;
//     Node *arb;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         arb = NULL;
//     }
// };



// // } Driver Code Ends
// class Solution
// {
//     private:
//     void insertAtTail(Node* &head, Node* &tail, int data){
//         Node *newNode = new Node(data);
//         if(head==NULL){
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         else{
//             tail->next = newNode;
//             tail = newNode;
//         }
        
//     }
//     public:
//     Node *copyList(Node *head)
//     {
//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;
//         Node*temp = head;
//         while(temp!=NULL){
//            insertAtTail(cloneHead, cloneTail, temp->data); 
//            temp = temp->next;
//         }
//         // create a map
//         unordered_map<Node*, Node*>mapping;
//         temp = head;
//         Node* temp2 = cloneHead;
//         while(temp!=NULL){
//             mapping[temp] = temp2;
//             temp = temp->next;
//             temp2 = temp2->next;
//         }
//         temp  = head;
//         temp2 = cloneHead;
//         while(temp!=NULL){
//             temp2->arb = mapping[temp->arb];
//             temp = temp->next;
//             temp2 = temp2->next;
//         }
//         return cloneHead;
//     }

// };

