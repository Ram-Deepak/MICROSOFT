#include <iostream>
#include <math.h>

using namespace std;

bool isPerfectSquare(int n){
	double s = sqrt(n);
	if((int)s!=s)
		return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	if(isPerfectSquare(n))
		cout << "Yes this is a perfect square";
	else
		cout << "No, this is not a perfect square";
	cout << endl;
	return 0;
}
