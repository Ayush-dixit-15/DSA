// iterstively
string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";
//     traversing all elements of first array
    for(int i=0; i<arr[0].length(); i++){
        char ch = arr[0][i];
        
        bool match = true;
//         comparing it with the other strings
        for(int j =1; j<n ;j++){
//             not match
            if(arr[j].size()<i|| ch!= arr[j][i]){
                match = false;
                    break;
            }
        }
        if(match == false)
            break;
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}

