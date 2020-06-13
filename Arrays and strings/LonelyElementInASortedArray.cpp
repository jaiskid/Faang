#include<iostream>
#include<vector>
using namespace std;
int singleDuplicate(vector<int>&nums) {
	int left = 0, right = nums.size() - 1;
	while (left < right) {
		int mid = left + (right - left) / 2;
		if ((mid % 2 == 0 and nums[mid] == nums[mid + 1] ) || (mid % 2 == 1 and nums[mid] == nums[mid - 1]))
			left = mid + 1;
		else
			right = mid;
	}
	return nums[left];
}
//this approach gonna take o(n) steps
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	// int ans = 0;
	// for (int i = 0; i < n; i++) {
	// 	ans ^= nums[i];
	// }
	// cout << ans;
//now here is a opitimisation in the code is that you can use binary search in this question
	cout << singleDuplicate(nums);

}

