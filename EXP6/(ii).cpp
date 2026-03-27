// (ii)
// iterative binary search
#include<iostream>
using namespace std;
int binary(int a[], int low, int high, int key){
    if(low>high){
        return 0;
    }
    int mid=(low+high)/2;
    if(a[mid]==key){
        return 1;
    }
    else if(key<a[mid]){
        return binary(a, low, mid-1, key);
    }
    else{
        return binary(a, mid+1, high, key);
    }
}
int main(){
    int mid, high, low, i, key, n, a[10];
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
    int match=binary(a, low, high, key);
    if(match==1){
    cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }
    return 0;
}
