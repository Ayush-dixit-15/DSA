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




// optimised approach
#include<algorithm>
#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    vector<int> ans;
    int n = arr.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i<n ; i++){
        int sum = 0;
        for(int j = i; j<n ; j++){
            sum+=arr[j];
            if(pq.size()<k){
                pq.push(sum);
            }
            else{
                if(sum >= pq.top()){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    int answer = pq.top();
    return answer;
}