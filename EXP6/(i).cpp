// (i)
// normal binary search
#include<iostream>
using namespace std;
int main(){
    int mid, high, low, i, key, n, a[10], match=0;
    cout<<"Enter size: ";
    cin>>n;
    high=n-1;
    low=0;
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            match=1;
            break;
        }
        if(key<a[mid]){
            high=mid-1;
        }
        if(key>a[mid]){
            low=mid+1;
        }
    }
    if(match==1){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
    return 0;
}
