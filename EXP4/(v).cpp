// leaders problem in an array
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {9, 2, 8, 4, 5};
    int n = v.size();
    cout << "leaders are: \n";
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (v[i] < v[j])
                break;
        }
        if (j == n)
            cout<<v[i] << " ";
    }
    cout << endl;
    return 0;
}
