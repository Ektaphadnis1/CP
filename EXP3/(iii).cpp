// M to power N
#include <iostream>
using namespace std;
int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return m*pow(m,n-1);
    }}
int main(){
    int n, m;
    cout<<"Enter an integer n and its power m: ";
    cin>>n>>m;
    int result=pow(n,m);
    cout<<"Ans: "<<result;
    return 0;
}
