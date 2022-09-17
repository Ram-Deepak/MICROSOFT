#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max, secondMax;
    cin >> max;
    cin >> secondMax;
    if(max > secondMax){
        max = max + secondMax;
        secondMax = max - secondMax;
        max = max - secondMax;
    }
    else{
        secondMax = max + secondMax;
        max = secondMax - max;
        secondMax = secondMax - max;
    }
    for(int index=2; index<n; index++){
        int val;
        cin >> val;
        if(val>max){
            secondMax = max;
            max = val;
        }
        else if(val<max && val>secondMax)
            secondMax = val;
    }
    cout << secondMax << endl;
    return 0;
}
