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
  TrieNode* root;
   Trie(){
     root = new TrieNode('\0');
   }

  //  INSERTING IN A TRIE
   void insertUtil(TrieNode* root, string word){
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
     insertUtil(child, word.substr(1));
   }
   void insertWord(string word){
    insertUtil(root, word);
   }


  //  SEARCHING FOR A WORD IN A TRIE
   bool searchUtil(TrieNode* root, string word){
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
    return searchUtil(child, word.substr(1));
  }

  bool searchWord(string word){
    return searchUtil(root, word);
   }


  //  CHECKING IF THE TRIE IS EMTPY
  bool isEmpty(TrieNode* root){
    for(int i=0; i<26; i++){
      if(root->children[i]){
        return false;
      }
    }
    return true;
  }
  

  // REMOVING A WORD FORM THE TRIE
 void removeUtils(TrieNode* root, string word){
  
  if(word.length()==0){
    if(root->isTerminal){
      root->isTerminal = false;
    }
    // if(isEmpty(root)){
    //   delete (root);
    //   root = NULL;
    // }
    return ;
  }
  int index = word[0]-'a';
  TrieNode* child;
  child = root->children[index];
  removeUtils(child, word.substr(1));
  // if(root->isTerminal == false){
  //   delete(root);
  //   root = NULL;
  // }
 
 }
 void removeWord(string word){
  removeUtils(root, word);
 }
};
int main(){
Trie *t = new Trie();
t->insertWord("arm");
t->insertWord("do");
t->insertWord("time");
t->insertWord("car");
t->insertWord("abs");
cout<<t->searchWord("time")<<endl;
cout<<t->searchWord("tim")<<endl;
t->removeWord("time");
cout<<t->searchWord("time")<<endl;
cout<<t->searchWord("car")<<endl;
t->removeWord("car");
cout<<t->searchWord("car")<<endl;
return 0;
}





// code studio implementation
/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
}; 
class Trie {

public:
     TrieNode* root;
    /** Initialize your data structure here. */
    Trie() {
       root = new TrieNode('\0');
    }

    /** Inserts a word into the trie. */
    void insertUtil(TrieNode* root , string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
//         check if the word is present or not
        TrieNode* child;
        int index = word[0] - 'a';
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            child  = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child, word.substr(1));
    }
    void insert(string word) {
         insertUtil(root, word);
    }

    /** Returns if the word is in the trie. */
    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        TrieNode* child;
        int index = word[0] - 'a';
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child, word.substr(1));
    }
    bool search(string word) {
       return searchUtil(root,word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
       bool prefixUtil(TrieNode* root, string word){
        if(word.length()==0){
            return true;
        }
        TrieNode* child;
        int index = word[0] - 'a';
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return prefixUtil(child, word.substr(1));
       }
    bool startsWith(string prefix) {
      return prefixUtil(root, prefix);
    }
};