#include<iostream>
#include<vector>
using namespace std;
int Possible(vector<int>&p, vector<int>&c) {
	int net = 0, curr = 0, start = 0;
	for (int i = 0; i < p.size(); i++) {
		net += p[i] - c[i];
		curr += p[i] - c[i];
		if (curr < 0) {
			curr = 0;
			start = i + 1;
		}
	}
	if (net < 0) {
		return -1;
	}
	return start;
}
int main() {
	int n;
	cin >> n;
	vector<int>p;
	p.resize(n);
	vector<int>c;
	c.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	cout << Possible(p, c);
}