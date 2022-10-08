#include <iostream>

using namespace std;

double mean(vector<int> array){
	double sum = 0;
	for(int i : array)
		sum += i;
	return sum/array.size();
}

int median(vector<int> array){
	sort(array.begin(), array.end());
	int l = array.size();
	if(l&1)
		return array[l/2];
	return (array[l/2]+array[l/2+1])/2.0;
}

int mode(vector<int> array){
	vector<int> freq(101, 0);
	for(int i : array)
		freq[i]++;
	int maxFreq = freq[array[0]], ele = array[0];
	for(int i : array){
		if(freq[i] > maxFreq){
			maxFreq = freq[i];
			ele = i;
		}
	}
	return ele;
}

int main(){
	int n;
	cin >> n;
	vector<int> array;
	for(int index=0; index<n; index++){
		int val;
		cin >> val;
		array.push_bacl(val);
	}
	cout << "Mean: " << mean(array) << endl;
	cout << "Median: " << median(array) << endl;
	cout << "Mode: " << mode(array) << endl;
	return 0;
}
