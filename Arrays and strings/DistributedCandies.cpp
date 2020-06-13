#include<iostream>
#include<vector>
#include<map>
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int distributedCandies(vector<int>&candies) {
	unordered_map<int, int>m;
	int count = 0;
	for (int i = 0; i < candies.size(); i++) {
		if (m.find(candies[i]) == m.end()) {
			m.insert({candies[i], 1});
			count++;
		}
		else {
			m[candies[i]]++;
		}
	}
	int ans = count < candies.size() / 2 ? count : candies.size() / 2;
	return ans;
}
int main() {
	fastIO

	int n;
	cin >> n;
	vector<int>candies;
	candies.resize(n);
	F(candies, n);
	cout << distributedCandies(candies);

}