#include <iostream>

using namespace std;

bool isPalindrome(string word){
    int l = word.length();
    for(int i=0; i<l/2; i++){
        if(word[i] != word[l-i-1])
            return false;
    }
    return true;
}

int main()
{
	string str;
	cin >> str;
	if(isPalindrome(str))
	    cout << "Palindrome";
	else
	    cout << "Not a Palindrome";
	cout << endl;
	return 0;
}
