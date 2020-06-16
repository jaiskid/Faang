#include<iostream>
#include<map>
#include<vector>
using namespace std;
int BalancedSubSize(vector<int>&nums) {
	map<int, int> mp;
	mp.insert(make_pair(0, -1));
	int count = 0;
	int ans = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 1) {
			count++;
		}
		else {
			count--;
		}
		if (mp.count(count)) {
			ans = max(ans, i - mp[count]);
		}
		else {
			mp.insert(make_pair(count, i));
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << BalancedSubSize(nums);
}