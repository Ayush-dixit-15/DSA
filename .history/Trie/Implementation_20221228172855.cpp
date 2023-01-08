#include<iostream>
using namespace std;
class TrieNode{
    public:
      char data;
      TrieNode *children[26];
      bool isTerminal;
      TrieNode(char ch){
          data = ch;
          for (int  i = 0; i < 26; i++)
          {
            children[i] = NULL;
          }
         isTerminal = false; 
      }
};
class Trie{
  public:
     Trie(){
      TrieNode* root = new TrieNode('\0');
    }
   void insertWord(TrieNode* &root, string word){
          // base case
      if(word.length()==0){
        root->isTerminal = true;
        return;
      }
     int index = word[0] - 'a';
     TrieNode* child;
    //  present
     if( root->children[index]!=NULL ){
      child = root->children[index];
     }
     else{
      child = new TrieNode(word[0]);
      root->children[index] = child;
     }
    //  recursion
     insertWord(child, word.substr(1));
   }


   bool searchWord(TrieNode* &root, string word){
    // base case
    if(word.length() == 0 ){
      return root->isTerminal;
    }
    int index = word[0] - 'a';
    TrieNode* child;
    // is present
    if(root-> children[index]!=NULL){
      child = root->children[index];
    }
    else{
      return false;
    }
    return searchWord(root, word.substr(1));

   }
};
int main(){

return 0;
}