#include<iostream>
#include<vector>
using namespace std;
int Lower(vector<int>&nums, int s, int e, int key) {
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (nums[mid] == key) {
			ans = mid;
			e = mid - 1;
		}
		if (nums[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}

	return ans;
}
int Upper(vector<int>&nums, int s, int e, int key) {
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		
		if (nums[mid] == key) {
			ans = mid;
			s = mid + 1;
		}
		else if (nums[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}

	return ans;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	int key; cin >> key;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << Lower(nums, 0, n - 1, key) << " " << Upper(nums, 0, n - 1, key);
}