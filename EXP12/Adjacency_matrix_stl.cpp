#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v = 4;
    vector<vector<int>> adj(v, vector<int>(v, 0));

    adj[0][1] = 1;
    adj[1][2] = 1;
    adj[2][3] = 1;
    adj[0][3] = 1;

    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
