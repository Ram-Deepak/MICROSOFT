#include <iostream>
#include <vector>

using namespace std;

void printTranspose(vector<vector<int>> matrix, int r, int c){ 
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}
int main(){
	int r, c;
	cin >> r >> c;
	vector<vector<int>> matrix(r, vector<int>(c, 0));
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			int val;
			cin >> val;
			matrix[i][j] = val;
		}
	}
	cout << "Transpose of the matrix is" << endl;
	printTranspose(matrix, r, c);
	return 0;
}
