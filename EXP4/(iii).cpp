// move all zeroes to end of array
#include<iostream>
using namespace std;
int main(){
    int arr[100], n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j = 0; // position for next non-zero element
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    // fill remaining positions with 0
    while(j < n){
        arr[j] = 0;
        j++;
    }
    cout<<"Array after shifting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
