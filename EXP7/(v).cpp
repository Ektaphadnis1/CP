//kth smallest element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Ks(vector<int>& x_arr, int k) {
    sort(x_arr.begin(), x_arr.end());
    return arr[K - 1];
}
int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(2);
    int k = 4;
    cout << Ks(arr, k) << endl;
    return 0;
}
