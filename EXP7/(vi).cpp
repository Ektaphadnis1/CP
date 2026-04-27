#include<iostream>

using namespace std;

int main() {
    int n=5; int arr[] = {0,-1,1,2,-3};
    int count=0;
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i]+arr[j]+arr[k]==0)
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                count++;}}}
    if(count==0) {
    cout<<"No triplet found.";
    }

if(count == 0) {
    return 0;
}
return 0;}
