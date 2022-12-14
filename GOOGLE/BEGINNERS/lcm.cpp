#include<iostream>

#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

int main(){
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}
