#include<iostream>
using namespace std;
int comp(string x, string y) {
	string xy = x.append(y);
	string yx = y.append(x);
	return xy > yx ? 1 : 0;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n, comp);
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
		cout << endl;
	}

}