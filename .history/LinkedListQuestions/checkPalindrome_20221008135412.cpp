// #include <bits/stdc++.h> 
// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
// 	        int data;
// 	        Node *next;
// 	        Node(int data)
// 	        {
// 		        this->data = data;
// 		        this->next = NULL;
// 	        }
//         };

// *****************************************************************/

// bool isPalindrome(Node *head)
// {
//     if(head == NULL || head->next == NULL){
//         return true;
//     }
//     Node* temp = head;
//     int count = 0;
//     while(temp!=NULL){
//         count++;
//         temp = temp->next;
//     }
//     temp = head;
//     int *arr = new int[count];
//     int i=0;
//     while(i<count&&temp!=NULL){
//         arr[i] = temp->data;
//         i++;
//         temp = temp->next;
//     }
//     i=0;
//     int j= count-1;
//     while(i<=j){
//         if(arr[i]!=arr[j]){
//             return false;
//         }
//            i++;
//             j--;
//     }
//     return true;
// }
// we create an array , paste the values