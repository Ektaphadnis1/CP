// to map the identical items to the same index in hash table
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
        int originalIndex = index;
        // Check if element already exists (identical items mapped to same position)
        while(table[index] != -1) {
            if(table[index] == key) {
                // Element already exists, no need to insert again
                break;
            }
            // Collision occurs, move to next index using formula: (value+1) % hashSize
            index = (index + 1) % size;
            // If we've wrapped around and checked all slots, table is full
            if(index == originalIndex) {
                cout << "Hash table is full! Cannot insert " << key << endl;
                break;
            }
        }
        // Only insert if slot is empty
        if(table[index] == -1) {
            table[index] = key;
        }
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
