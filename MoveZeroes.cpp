#include<iostream>
#include<vector>
using namespace std;
void MoveZeroes(vector<int>&nums) {
	int pos = 0;
	for (auto &num : nums) {
		if (num)
			swap(nums[pos++], num);
	}
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	MoveZeroes(nums);
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}
}