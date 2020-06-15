#include<iostream>
using namespace std;
int Rotated_sorted(int *arr, int key, int low, int high) {
	if (low > high) {
		return -1;
	}
	int mid = low + (high - low) / 2;
	if (arr[mid] == key) {
		return mid;
	}
	if (arr[low] <= arr[mid]) {
		if (key >= arr[low] and key <= arr[mid]) {
			return Rotated_sorted(arr, key, low, mid - 1);
		}
		else {
			return Rotated_sorted(arr, key, mid + 1, high);
		}
	}
	else {
		if (key >= arr[mid] and key <= arr[high]) {
			return Rotated_sorted(arr, key, mid + 1, high);
		}
		else {
			return Rotated_sorted(arr, key, low, mid - 1);
		}
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cin >> key;
	cout << Rotated_sorted(arr, key, 0, n - 1);
}
