// odd occurences
#include <iostream>
using namespace std;
int main(){
    int n, result=0;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        result=result^arr[i];
    }
    cout<<"Odd occurences: "<<result;
    return 0;
