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
   TrieNode* rootNode;
   void insertUtil(TrieNode* root, string word){

   }
   void insertWord(string word){

   }
};
int main(){

return 0;
}