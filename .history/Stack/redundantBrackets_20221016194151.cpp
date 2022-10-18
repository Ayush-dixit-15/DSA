#include <bits/stdc++.h>
bool findRedundantBrackets(string &s) {
 stack<char> str;
 for (int i = 0; i < s.length(); i++) {
   char ch = s[i];

   if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*') {
     str.push(ch);
   } else {
     if (ch == ')') {
       bool checkforRedundancy = true;
       while (str.top() != '(') {
         char top = str.top();
         if (top == '+' || top == '-' || top == '/' || top == '*') {
           checkforRedundancy = false;
         }
         str.pop();
       }
       if (checkforRedundancy == true)
         return true;
         str.pop();
     }
   }
 }
 return false;
}