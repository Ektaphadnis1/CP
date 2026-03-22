// snake pattern
#include<iostream>
using namespace std;
int main(){
    int a[10][10], i, j, n, m;

    cout<<"enter the sizes of rows and columns:";
    cin>>n>>m;
    cout<<"enter the values:";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(j=m-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
