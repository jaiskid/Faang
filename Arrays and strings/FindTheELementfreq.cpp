#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<int>ans;
	for (int i = 0; i < n; i++) {
		int temp = abs(nums[i]);
		if (nums[temp - 1] < 0) {
			ans.push_back(temp);
		}
		else {
			nums[temp - 1] *= -1;

		}
	}
	cout << "[";
	for (int i = 0; i < ans.size() - 1; i++) {
		cout << ans[i] << ", ";
	}
	cout << ans[ans.size() - 1] << "]";
}