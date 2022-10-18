// #include <bits/stdc++.h> 
// /****************************************************************
//     Following is the Linked List node structure

//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/


// Node* kReverse(Node* head, int k) {
//     // Write your code here.
//     if(head == NULL){
//         return NULL;
//     }
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int cnt = 0;
//     while( curr != NULL && cnt < k ){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr= next;
//         cnt++;
//    }
//    if(next!=NULL){
//        head->next = kReverse(next,k);
//    }
//     return prev;
// }




// check if ll is circular or not
// bool circularLL(Node* head)
// {
//     if(head == NULL){
//         return false;
//     }
    
//     if(head -> next == NULL){
//         return false;
//     }
    
//     Node* temp = head -> next;
    
//     while(temp != NULL && temp != head){
//         temp = temp -> next;
//     }
//     if(temp == head){
//         return true;
//     }
// }