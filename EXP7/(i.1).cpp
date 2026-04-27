//with vector
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {9, 1, 7, 3, 5};
    sort(v.begin(), v.end());
    cout << "sorted vector: ";
    for (int x : v) {
    cout << u << endl;
    }
    return 0;
}
