#include<bits/stdc++.h>
using namespace std;
int shortestWordDistance(vector<string>&words, string word1, string word2) {
	int minimum = INT_MIN;
	int n = words.size();

	int p = -1;
	for (int i = 0; i < n; ++i)
	{
		if (words[i] == word1) {
			if (p == -1) {
				p = i;
			}
			else {
				minimum = min(minimum, abs(i - p));
				p = i;
			}
		}
	}
	return minimum;
}
int main() {
	int n;
	cin >> n;
	vector<string>words;
	words.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}
	string word1, word2;
	cin >> word1 >> word2;
	cout << shortestWordDistance(words, word1, word2);
}