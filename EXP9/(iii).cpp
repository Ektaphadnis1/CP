#include <iostream>
    #include <list>
    using namespace std;
    int main() {
    list<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.pop_back();
    cout << a.back() << endl;
    return 0;
    }
