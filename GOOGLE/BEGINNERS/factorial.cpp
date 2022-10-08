#include <iostream>

using namespace std;

int dp[20] = {0};

int fact(int n){
    if(!dp[n]){
        dp[n] = (n<=1) ? 1 : n * fact(n-1);
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;
    return 0;
}
