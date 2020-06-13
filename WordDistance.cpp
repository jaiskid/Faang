//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> words;
	words.resize(n);
	int ans = n;
	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}
	string word1, word2;
	cin >> word1 >> word2;
	int w1 = -1, w2 = -1;
	for (int k = 0; k < n; k++) {
		if (words[k] == word1) {
			w1 = k;
		}
		if (words[k] == word2) {
			w2 = k;
		}
		if(w1!=-1 and w2!=-1)
		ans = min(ans, abs(w2 - w1));
	}
	cout << ans;

}
