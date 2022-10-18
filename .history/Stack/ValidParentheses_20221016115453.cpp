// bool isValidParenthesis(string expression)
// {
//       stack<char> stack;
//         for(int i =0; i<expression.length(); i++){
//             char ch = expression[i];
//             // if opening bracket is encountered, push in the stack
//             if(ch == '('|| ch == '{' || ch == '['){
//                 stack.push(ch);
//             }
//             else{
//                 if(!stack.empty()){
//                     char top = stack.top();
//                     if( (ch == ')' && top == '(') || 
//                         (ch == '}' && top == '{') 
//                     ||  (ch == ']' && top == '[') ){
//                         stack.pop();
//                     }
//                     else {
//                         return false;
//                     }
//                 }
//                 else{
//                     return false;
//                 }
//             }
        
//         }
//         if(stack.empty()){
//             return true;
//         }
//         else{
//             return false;
//         }
        
// }