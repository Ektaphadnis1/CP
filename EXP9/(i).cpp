// Implementation of stack

// stack using array  
#include <iostream>  
using namespace std;  
void push(int a[], int &top, int x) {  
    if (top >= 4) {  
    cout << "stack overflow \n" << endl;  
    return;  
    }  

    a[top] = x;  
}  

void pop(int a[], int &top) {  
    if (top == -1) {  
    cout << "stack underflow \n" << endl;  
    return;  
    }  

    top--;  
    a[top] = 0;  
}  

int main() {  
    int a[5], top = -1;  
    push(a, top, 10);  
    push(a, top, 20);  
    push(a, top, 30);  
    push(a, top, 40);  
    push(a, top, 50);  
    pop(a, top);  
    pop(a, top);  
    for (int i = top; top != 0; i--) {  
    cout << a[i] << " ";  
    }  
    return 0;  
}
