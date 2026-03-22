// max AND value
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int current = arr[0] & arr[1];
    int maxAnd = current;
    
    for(int i = 0; i<n;i++){
        for(int j=i+1;j<n;j++){
            current= arr[i] & arr[j];
            if(current>maxAnd){
                maxAnd=current;
            }
        }
    }
    cout<<"maxAnd is: "<<maxAnd;
    return 0;
}
