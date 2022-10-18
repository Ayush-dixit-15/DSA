// #include <bits/stdc++.h> 
// #include <bits/stdc++.h> 

// int getLength(Node* head){
//     int len = 0;
//     while(head !=NULL){
//         len++;
//         head = head->next;
//     }
//     return len;
// }
// Node *findMiddle(Node *head) {
//   int len = getLength(head);
//   int ans = (len/2);
    
//   Node *temp = head;
//    int cnt = 0;
//    while(cnt<ans){
//       temp = temp->next;
//        cnt++;
//     }
//     return temp;
// }

// OR




#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

Node *findMiddle(Node *head) {
   if(head == NULL || head->next == NULL ){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }
  Node* slow = head;
  Node* fast  = head;
    while(fast->next != NULL && fast->next->next!= NULL);
    {
       slow = slow->next;
       fast = fast->next->next;
    }
    return slow;
}