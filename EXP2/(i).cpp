// SET UNSET
#include <iostream>
using namespace std;
int main(){
    int num, p;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter position to check: ";
    cin>>p;
    if((num & (1<<p))!=0){
        cout<<"Bit is set";
    }
    else{
        cout<<"Bit is unset";
    }
    return 0;
}
