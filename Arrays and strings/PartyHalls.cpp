#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Partyhalls(vector<int>start, vector<int>end) {
	int i = 0, j = 0, c = 0, max = 0;
	while (i < start.size() and j < end.size()) {
		if (start[i] < end[j]) {
			c++;
			i++;
		}
		else {
			c--;
			j++;
		}
		if (max < c) {
			max = c;
		}
	}
	return max;
}
int main() {
	int n;
	cin >> n;
	vector<int>start, end;
	start.resize(n);
	end.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> start[i] >> end[i];
	}
	cout << Partyhalls(start, end);
}