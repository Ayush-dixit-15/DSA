#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    // base case
    if(src==dest){
        cout<<"aa gya"<<endl;
        return;
    }
    reachHome(src+1, des)
}
int main(){
int dest = 10;
int src = 1;
reachHome(src, dest);
return 0;
}
