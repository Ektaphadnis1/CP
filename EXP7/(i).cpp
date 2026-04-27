#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int arr[5];
    int n = 5;

    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
    cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
    }
    return 0;
}
