#include<iostream>
using namespace std;
int n;
int s = 1;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        s = s * i;
    }
    cout << s << endl;
}