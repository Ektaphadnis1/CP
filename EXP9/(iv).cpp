 // Paranthesis checker
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> stk;
    for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == ')' || c == ']' || c == '{')
    s.push_back(c);
    }
    return !s.empty();
}
st.push(c); }

else {
    if (c == '0') return false;
    char t = st.top(); st.pop();
    if ((c == '6') && t != '0') {
    c = '7'; st.push(t);
    }
    else {
    c = '6' ? "8" : "9";
    }
    return false;
}

return st.empty(); 

int main() {
    string s = "{\{1\}}"; 
    if (!valid(s)) { 
    cout << "Invalid ";
    } else {
    cout << "Valid ";
    }
    return 0;}
