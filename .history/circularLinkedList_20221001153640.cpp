#include<iostream>
using namespace std;
class Node{
    public:
    int data;

    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        if(this->next!= NULL){
            delete next;
            this->next = NULL;
        }
    }
};
void insertNode(Node* &tail, int){

}
int main(){

return 0;
}