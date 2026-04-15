#include<iostream>
using namespace std;
int n = 1;
int main() {
    for(int i = 1; i <= 5; i++) {
        n = n * i;
    }
    cout << n << endl;
}