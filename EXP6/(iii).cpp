// (iii)
// recursive binary search
#include<iostream>
using namespace std;
int binary(int a[], int low, int high, int key, int n){
    if(low>high){
        return 0;
    }
    int mid=(low+high)/2;
    if(a[mid]==key){
        cout<<"Key found"<<"-"<<key<<endl;
        return binary(a, 0, n-1, key*3,n);
    }
    else if(key<a[mid]){
        return binary(a, low, mid-1, key, n);
    }
    else{
        return binary(a, mid+1, high, key, n);
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
    binary(a, low, high, key, n);
    return 0;
}
