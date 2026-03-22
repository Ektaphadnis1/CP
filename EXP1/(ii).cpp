//transposition of matrix
#include <iostream>
using namespace std;
int main(){
    int rows, col;
    cout<<"Enter rows and columns: ";
    cin>>rows>>col;
    int matrix[10][10];
    cout<<"Enter matrix elements: ";
    for(int i=0;i<rows;i++){
        for(int j=0; j<col;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Transposed matrix is: "<<endl;
    for(int i=0;i<col;i++){
        for(int j=0; j<rows;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
     return 0;   
}
