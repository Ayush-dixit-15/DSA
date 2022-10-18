// // move all zeros to right without altrring the order of the array

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j =0 ; 
//         for(int i =0 ; i<nums.size(); i++){
//             if(nums[i]!=0){
//                 swap(nums[j], nums[i]);
//                 j++;
//             }
//         }
//     }
// };