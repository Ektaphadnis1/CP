// sum of digits
// #include <iostream>
using namespace std;
int num(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+num(n/10);
    }}
int main(){
    int n, sum;
    cout<<"Enter any number: ";
    cin>>n;
    sum=num(n);
    cout<<"The sum of digits is: "<<sum;
    return 0;
}
