#include<iostream>
#include<vector>
using namespace std;
// int Findpeak(vector<int>&nums, int s, int e) {
// 	while (s <= e) {
// 		int mid = s + (e - s) / 2;
// 		if (s==e) {
// 			return s;
// 		}
// 		else if (nums[mid] < nums[mid + 1])
// 			s = mid + 1;
// 		else
// 			e = mid;
// 	}
// 	return -1;
// }
bool Findpeak(vector<int>&nums, int s, int e) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (s == e) {
			return true;
		}
		else if (nums[mid] < nums[mid + 1])
			s = mid + 1;
		else
			e = mid;
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	if (Findpeak(nums, 0, n - 1))
		cout << "true";
	else
		cout << "false";
}