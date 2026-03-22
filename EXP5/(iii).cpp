#include <iostream>
using namespace std;

int main() {
    int n, size;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter hash table size: ";
    cin >> size;

    vector<int> table[size]; // hash table with chains

    for(int i = 0; i < n; i++) {
        int index = arr[i] % size; // formula used: h(key) = key % hashtablesize
        table[index].push_back(arr[i]);
    }

    cout << "\nHash Table:\n";
    for(int i = 0; i < size; i++) {
        cout << i << " -> ";
        for(int x : table[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
