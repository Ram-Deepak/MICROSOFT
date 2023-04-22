#include <bits/stdc++.h>

using namespace std;

int manhattanDistance(int x1, int y1, int x2, int y2){
    int s1 = (abs(y2-y1)) * (abs(y2-y1));
    int s2 = (abs(x2-x1)) * (abs(x2-x1));
    cout << sqrt(abs(s1-s2)) << endl;
    return sqrt(abs(s1-s2));
}

int area(int a, int b, int c){
    int p = (a+b+c)/2;
    return sqrt(p*abs(p-a)*abs(p-b)*abs(p-c));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    int a = manhattanDistance(x1, y1, x2, y2);
    int b = manhattanDistance(x2, y2, x3, y3);
    int c = manhattanDistance(x3, y3, x1, y1);
    cout << a << " " << b << " " << c << endl;
    cout << area(a, b, c) << endl;
    return 0;
}
