#include<iostream>
#include<vector>
using namespace std;
int Maximumsubarray(vector<int>&nums) {
	int res = INT_MIN;
	int curr = INT_MIN;
	for (auto &x : nums) {
		curr = (curr == INT_MIN) ? x : max(x + curr, x);
		res = max(res, curr);
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << Maximumsubarray(nums);

}