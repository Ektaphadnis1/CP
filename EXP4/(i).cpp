// find the second largest element
#include<iostream>
#include<vector>
using namespace std;
int getSecondLargest(vector<int> &arr) {
    int s = arr.size();
    int largest = arr[0];
    int s_largest = -1;

    for(int i = 0; i < s; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    for(int i = 0; i < s; i++) {
        if(arr[i] < largest && arr[i] != largest) {
            s_largest = arr[i];
        }
    }
    return s_largest;
}
int main() {
    vector<int> v;
    int n, x;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
    v.push_back(x);
    }
    cout << "Second Largest element is: "<<getSecondLargest(v);
    return 0;
}
