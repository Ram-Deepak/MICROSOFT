#include <iostream>
#include <vector>

using namespace std;

int main(){
	string word;
	cin >> word;
	vector<int> freq(26, 0);
	for(char ch : word){
		freq[ch-'a']++;
	}
	for(int ch = 0; ch<26; ch++){
		if(freq[ch])
			cout << (char)(ch+'a') << " " << freq[ch] << endl;
	}
	return 0;
}
