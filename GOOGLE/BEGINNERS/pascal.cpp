#include <iostream>
#include <vector>

using namespace std;

int main(){
	int coeff;
	cin >> coeff;
	vector<vector<int>> C(coeff, vector<int>(coeff, 0));
	for(int n=0; n<coeff; n++){
		for(int k=0; k<=n; k++){
			if(k==0 || n==k)
				C[n][k] = 1;
			else
				C[n][k] = C[n-1][k-1] + C[n-1][k];
		 }
	}
	for(int i=0; i<coeff; i++){
		for(int j=0; j<coeff; j++)
			cout << C[i][j] << " ";
		cout << endl;
	}
	return 0;
}
