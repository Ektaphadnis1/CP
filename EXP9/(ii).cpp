
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> a;
    int top = -1;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.pop();
    cout << a.top() << endl;
    return 0;
}
