// approach 1
// #include <bits/stdc++.h> 
// void interLeaveQueue(queue < int > & q) {
//     // Write your code here.
//    int size = q.size();
//    int half = size/2;
//     queue<int> newQueue;
//     while(half--){
//         int val = q.front();
//         q.pop();
//         newQueue.push(val);
//     }
//     while(!newQueue.empty()){
//         int val = newQueue.front();
//         newQueue.pop();
//         q.push(val);
//         int val2 = q.front();
//         q.pop();
//         q.push(val2);
//     }
// }
