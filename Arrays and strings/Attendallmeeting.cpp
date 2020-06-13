#include<iostream>
#include<vector>
using namespace std;
bool AttendAllmeeting(vector<vector<int> >&intervals, int n) {
// interval[start][end] next start should be less than previous end
	for (int i = 1; i <n; i++) {
		if (intervals[i][0] < intervals[i - 1][1])
			return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	vector<vector<int> >intervals;
	for (int i = 0; i < n; i++) {
		int start;
		int end;
		vector<int>temp;
		cin >> start >> end;
		temp.push_back(start);
		temp.push_back(end);
		intervals.push_back(temp);
	}
	cout << AttendAllmeeting(intervals, n);
}