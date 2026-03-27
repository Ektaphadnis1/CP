// (iv)
// find the first occurence
#include <iostream>
#include<vector>
using namespace std;
int FO(vector<int> a, int x){
    int l=0,r=a.size()-1, ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x){
            ans=m;
            r=m-1;
        }
        else if(a[m]<x){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return ans;
}
int main(){
    vector<int> a = {1,2,3,2,2,4};
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<FO(a,x);
    return 0;
}
