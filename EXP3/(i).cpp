// 1 to N (recursion)
#include <iostream>
using namespace std;
void result (int n){
    if(n<=0){
        return;
    }
    else{
        cout<<n<<" ";
        return result(n-1);
    }}
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    result(n);
    return 0;
}
