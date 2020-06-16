#include<iostream>
#include<vector>
using namespace std;
vector<int>TargetZeroes(int n) {
	vector<int>ans;
	for (int i = 1; i <= n / 2; i++) {
		ans.push_back(-i);
		ans.push_back(i);
	}
	if (n & 1) {
		ans.push_back(0);
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	vector<int>ans = TargetZeroes(n);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
}