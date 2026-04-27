//Queue using STL
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front element: " << q.front() << endl;
    cout << "End element: " << q.back() << endl;
    while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
    }
    cout << endl;
    return 0;
}
