#include<iostream>
using namespace std;
// /********************************
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

// ********************************/

Node* sortList(Node *head)
{
    int zero = 0;
    int one = 0;
    int two = 0;
    Node* temp = head;
    while(temp!= NULL){
        if(temp->data == 0){
            zero++;
        }
        else if(temp->data == 1){
            one++;
        }
        else{
            two++;
        }
    }
    Node *remp = head;
    while(zero){
        remp->data = 0;
        remp = remp->next;
    }
     while(one){
        remp->data = 1;
        remp = remp->next;
    }
         while(two){
        remp->data = 2;
        remp = remp->next;
    }
}

int main(){

return 0;
}