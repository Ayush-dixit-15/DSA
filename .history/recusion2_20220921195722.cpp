#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<<"src"
    // base case
    if(src==dest){
        cout<<"aa gya"<<endl;
        return;
    }
    reachHome(src+1, dest);
}
int main(){
int dest = 10;
int src = 1;
cout<<"endl"
reachHome(src, dest);
return 0;
}
