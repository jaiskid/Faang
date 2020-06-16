#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
string prefix(vector<string>&s) {
	if (s.size() == 0) {
		return "";
	}
	string ans = s[0];
	for (int i = 1; i < s.size(); i++) {
		string temp = "";
		for (int j = 0; j < min(ans.size(), s[i].size()); j++) {
			if (ans[j] == s[i][j]) {
				temp += ans[j];
			} else {
				break;
			}
		}
		ans = temp;
	}
	return ans;

}
int main() {
	int n;
	cin >> n;
	vector<string>s;
	s.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cout << prefix(s);
}