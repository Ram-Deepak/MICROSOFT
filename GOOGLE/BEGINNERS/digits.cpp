#include<iostream>
#include<set>

using namespace std;

int main(){
	long n;
	cin >> n;
	set<int> unique;
	while(n){
		unique.insert(n%10);
		n/=10;
	}
	cout << "Digits of the given number are"<<endl;
	for(int digit : unique)
		cout << digit << " ";
	cout << endl;
	return 0;
}
