#include<iostream>
#include<cstring>
using namespace std;
string LongestPalindromic(string str) {
	char input[2 * str.size() + 1];
	for (int i = str.size(); i >= 0; i--) {
		input[2 * i + 1] = str[i];
		input[2 * i] = '#';
	}
	input[2 * str.size()] = '#';
	int lps[2 * str.size() + 1];
	int c = 0; // this is the center
	int r = 0; //this is the right bounder
	for (int x = 1; x < 2 * str.size() + 1; x++) {
		int mirr = 2 * c - x; //Mirror
		//Right value condition check
		if (x < r) {
			lps[x] = min(lps[mirr], r - x);
		}
		while (x + lps[x] + 1 <= 2 * str.size() and x - lps[x] - 1 >= 0 and input[x + lps[x] + 1] == input[x - lps[x] - 1]) {
			lps[x]++;
		}
		if (x + lps[x] > r) {
			c = x;
			r = x + lps[x];
		}
	}
	int ValueMax = 0;
	int IndexMax = 0;
	for (int i = 0; i < 2 * str.size() + 1; i++) {
		if (lps[i] > ValueMax) {
			ValueMax = lps[i];
			IndexMax = i;
		}
	}
	int palindromicSpan = ValueMax / 2;
	if (IndexMax % 2 == 0) {
		//even length palidromic string
		return str.substr(IndexMax / 2 - palindromicSpan, IndexMax / 2 + palindromicSpan);

	}
	else {
		//Odd length palindromic string
		return str.substr(IndexMax / 2 - palindromicSpan, IndexMax / 2 + palindromicSpan + 1);
	}

}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		cout << LongestPalindromic(str);
	}
}
