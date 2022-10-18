// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     vector<int> ans(n);
//     stack<int> s;
//     s.push(-1);
//    for(int i=n-1;i>=0;i--){
//        int curr = arr[i];
//        while(s.top()>=curr){
//            s.pop();
//        }
//        ans[i] = s.top();
//        s.push(curr);
//    }
//     return ans;
// }
// the 








// the approach used here is that we traverse the vector upside down and store in an stack(-1) initially if st.top()<curr{jo ki hai arr[i]} to hm curr ko push kr denge.
// agr esaa nai hai to hm tb tk pop krenge jb tk esaa na hojaye