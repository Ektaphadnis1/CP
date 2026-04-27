#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);

    cout << "Deque front: " << dq.front() << endl;
    cout << "Deque back: " << dq.back() << endl;

    dq.pop_front();
    cout << "Deque front after pop_front: " << dq.front() << endl;

    return 0;
}
