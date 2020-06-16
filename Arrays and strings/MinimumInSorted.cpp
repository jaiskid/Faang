#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {

	if (nums[0] <= nums[nums.size() - 1])
		return nums[0];
	int s = 0;
	int e = nums.size() - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if ( mid - 1 >= 0 and nums[mid] < nums[mid - 1])
			return nums[mid];
		else if (nums[mid] > nums[nums.size() - 1])
			s = mid + 1;
		// if(nums[mid]<nums[nums.size()-1])
		else
			e = mid - 1;

	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << findMin(nums);
}