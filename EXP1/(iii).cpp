//Fibonacci series
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>fib;
    if(n>=1){
        fib.push_back(0);
    }
    if(n>=2){
        fib.push_back(1);
    }
    for(int i=2;i<n;i++){
        fib.push_back(fib[i-1]+fib[i-2]);
    }
    for(int i=0;i<fib.size();i++){
        cout<<fib[i]<<" ";
    }
    return 0;
}
