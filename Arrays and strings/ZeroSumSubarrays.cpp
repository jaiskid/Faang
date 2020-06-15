#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		unordered_map<int, int> m;
		m[0] = 1;
		int ans = 0;
		int count = 0;
		for (int i = 0; i < n; i++) {
			count += a[i];
			cout << count << " ";
			if (m.find(count) != m.end()) {
				ans += m[count];
			}
			m[count]++;
		}
		cout << ans << endl;
	}
}
