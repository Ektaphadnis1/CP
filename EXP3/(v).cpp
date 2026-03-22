// subsets of an array
#include <iostream>
#include <vector>
using namespace std;
int count(int i, int sum,vector<int>&arr){
    if (sum==0){
        return 1;
    }
    if(i==arr.size()||sum<0){
        return 0;
    }
int main(){
    vector<int> arr = {1,2,3,4,5};
    int sum=6;
    cout<<"Subsets are: "<<count(0,sum,arr);
    return 0;
}
