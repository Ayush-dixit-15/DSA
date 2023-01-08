int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int, int> count;
    int maxF=0;
    int maxA=0;
    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;  
        maxF = max(maxF, count[arr[i]]);
    }
   for(int i =0; i<arr.size(); i++){
       if(maxF == count[arr[i]]){
           maxA = arr[i];
           break;
       }
   }
    return maxA;
}