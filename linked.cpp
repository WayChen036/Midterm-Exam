#include <iostream>
using namespace std;
int main() {
    int n[4];
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;
    }
    int *p = n;
    for(int i = 0; i < 4; i++) {
        cout << *(p + i) << " ";
    }
    return 0;
}