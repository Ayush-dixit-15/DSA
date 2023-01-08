// priority queue is maxHeap by default
#include<iostream>
#include<queue>
using namespace std;
int main(){
cout<<" using priority queue "<<endl;
priority_queue<int> pq;
pq.push(4);
pq.push(2);
pq.push(5);
pq.push(3);
cout<<pq.top();
pq.pop();
cout<<pq.size();
// minHeap
priority_queue<int, vector<int>, greater<int>> minHeap;
minHeap.push(4)
return 0;
}