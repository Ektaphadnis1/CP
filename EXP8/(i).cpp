#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
