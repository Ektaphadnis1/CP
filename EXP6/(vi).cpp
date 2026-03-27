// (vi)
// peak element
#include<iostream>
using namespace std;
int findpeak(int a[], int n){
    int left =0; int right=n-1;
    while(left<right){
        int mid=left+(right-left)/2;
        if(a[mid]<a[mid+1]){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return left;
}
int main(){
    int a[] = {1,3,20,4,1,0};
    int n=sizeof(a) / sizeof(a[0]);
    int index = findpeak(a, n);
    cout<<index<<"->"<<a[index]<<endl;
    return 0;
}
