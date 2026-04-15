#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int> q;
    s.push(10);
    s.push(20);
    s.pop();
    s.push(30);
    q.push(10);
    q.push(20);
    q.pop();
    q.push(30);
    cout << "Stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout << "Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}