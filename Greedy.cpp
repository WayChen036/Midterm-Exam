#include<iostream>
#include<vector>
using namespace std;
vector<int> Coins_Used;
int Greedy(vector<int> coins, int amount) {
    Greedy(coins, amount);
    int i = 0;
    while(amount > 0){
        if (amount >= coins[i]){
            amount = amount - coins[i];
            Coins_Used.push_back(coins[i]);
        }
        else
            i++;
    }
    return Coins_Used.size();
};
int main(){
    Greedy({25, 10, 5, 1}, 63);
    cout << "Coins used: ";
    for (int coin : Coins_Used) {
        cout << coin << " ";
    }
    cout << endl;
    return 0;
}