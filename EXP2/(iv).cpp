// even or odd
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter element: ";
    cin>>n;
    if((n&1)==0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
    return 0;
}
