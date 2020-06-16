#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void flip(vector<int>&v, int k) {
	reverse(v.begin(), v.begin() + k);
}
int find(vector<int>v, int n) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == n) {
			return i;
		}
	}
	return -1;
}
vector<int>pancakesort(vector<int>&v) {
	vector<int>ans;
	int n = v.size();
	while (n > 0) {
		int idx = find(v, n);
		if (idx != n - 1) {
			flip(v, idx + 1);
			flip(v, n);
			ans.push_back(idx + 1);
			ans.push_back(n);
		}
		n--;
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>nums;
		nums.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> nums[i];
		}
		vector<int>ans = pancakesort(nums);
		for (auto it : ans) {
			cout << it << " ";
		}

		cout << endl;

	}


}