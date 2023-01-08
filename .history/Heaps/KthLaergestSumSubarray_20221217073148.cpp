#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    vector<int> ans;
    int n = arr.size();
    for(int i = 0; i<n ; i++){
        int sum = 0;
        for(int j = i; j<n ; j++){
            sum+=arr[j];
            ans.push_back(sum);
        }
    }
    sort(ans.begin(), ans.end());
    int p = ans.size();
    int answer = ans[p-k];
    return answer;
}