#include<bits/stdc++.h>
using namespace std;
vector<int>findClosestElements(vector<int>&arr, int k, int x) {
	int n = arr.size();
	int pos = 0, cur_sum = 0;
	for (int i = 0; i < k; i++) {
		cur_sum += abs(x - arr[i]);
	}
	int sum = cur_sum;
	for (int i = 1; i <= n - k; i++) {
		cur_sum -= abs(x - arr[i - 1]);
		cur_sum += abs(x - arr[i + k - 1]);
		if (cur_sum < sum) {
			sum = cur_sum;
			pos = i;
		}
	}
	vector<int>ans;
	for (int i = 0; i < k; i++) {
		ans.push_back(arr[i + pos]);
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
	int k, x;
	cin >> k >> x;
	vector<int> ans = findClosestElements(nums, k, x);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}