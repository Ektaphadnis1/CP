#include <iostream>
#include <sstream>

using namespace std;
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string result = "";
    while (ss >> word) {
    if (result == " ") {
    result = word;
    } else {
    result = word + " " + result;
    }
    return 0;
    }
}
