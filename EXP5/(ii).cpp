// linear probing
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
    int table[size];
    for(int i = 0; i < size; i++) {
        table[i] = -1; // -1 indicates empty slot
    }
    // Insert elements using linear probing
    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int index = key % size; // hash function
        while(table[index] != -1) { // collision occurs
            index = (index + 1) % size; // move to next index
        }
        table[index] = key; // insert element
    }
    // Display hash table
    cout << "\nHash Table:\n";
    for(int i = 0; i < size; i++) {
        cout << i << " -> ";
        if(table[i] != -1)
            cout << table[i];
        cout << endl;
    }
    return 0;
}
