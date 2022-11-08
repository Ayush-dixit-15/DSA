// using stack with T.C O(n) and S.C O(n)
// void solve(stack<int>& st){
//     if(st.empty()){
//         return;
//     }
//     int temp  = st.top();
//     st.pop();
//     solve(st);
//     st.push(temp);
// }
// queue<int> rev(queue<int> q)
// {
//     // add code here.
//     stack<int> st;
//     while(!q.empty()){
//          st.push(q.front());
//         q.pop();
//     }
//     solve(st);
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
//     return q;
// }



// using recursion at  s.c o(1)
// void solve(queue<int> & q){
//     if(q.empty()){
//         return;
//     }
//     int temp = q.front();
//     q.pop();
//     solve(q);
//     q.push(temp);
// }
// queue<int> rev(queue<int> q)
// {
//     // add code here.
//     solve(q);
//     return q;
// }