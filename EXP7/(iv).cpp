//intersection of two sorted arrays
#include<iostream>
using namespace std;
int main() {
    int a[] = {1,2,2,2,4};
    int b[] = {2,2,3,4,5};
    for(int i =0;i<5;i++){
        if(a[i]>0&&a[i]==a[i-1]){
            continue;
        }
            for(int j=0;j<i+1;j++){
                if(a[i]==b[j]){
                    cout<<a[i]<<" ";
                    break;
                }
            }
    }
    return 0;
}
