// (vii)
// to find the target
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int target = 10, n=7, j=n-1;
    int a[] = {1,2,3,4,5,6,8};
    int i=0;
    while(i<j){
        if(a[i]+a[j]==target){
            cout<<"Target found at position "<<i<<" and "<<j<<endl;
            break;
        }
        else if(a[i]+a[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;
}
