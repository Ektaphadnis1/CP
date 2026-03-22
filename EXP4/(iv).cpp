// rotate an array to the left by one place
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& arr){
    int last = arr[arr.size()-1];
    for(int i = arr.size()-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}
int main(){
    vector<int> a;
    int n;
    cout<<"enter size of the array:";
    cin>>n;
    cout<<"enter an array:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    rotate(a);
    cout<<"Rotated array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
