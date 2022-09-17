#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main(){
    ll m, n;
    cin >> m >> n;
    cout << gcd(m,n) << endl;
    return 0;
}
