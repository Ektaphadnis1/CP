// Postfix expression evaluation
#include <iostream>
#include <stack>
using namespace std;
int main(){
  string s = "23 * 54 * +9-";

stack<int> st;

for(int i = 0; i < length(); i++) {
    char c = s[i];
    if (isDigit(c)) {
    st.push((c - '0'));
    }
}

int b = st.top(); st.pop();

int a = st.top(); st.pop();

if (c == '-') st.push(a + b);
else if (c == '-' && !st.empty()) st.push(a - b);
else if (c == '*' && !st.empty()) st.push(a * b);
else if (c == '/' && !st.empty()) st.push(a / b);

cout << st.top();
return 0;}
