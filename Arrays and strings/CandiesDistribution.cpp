#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
int Candy(vector<int>&nums) {
	int n = nums.size();
	vector<int>candies;
	candies.resize(n);
	candies[0] = 1;
	for (int i = 1; i < candies.size(); i++)
		if (nums[i] > nums[i - 1])
			candies[i] = candies[i - 1] + 1;
		else
			candies[i] = 1;
	for (int i = candies.size() - 2; i >= 0; i--)
		if (nums[i] > nums[i + 1])
			if (candies[i] <= candies[i + 1])
				candies[i] = candies[i + 1] + 1;
	int sum = 0;
	for (int i : candies) {
		sum += i;
	}
	return sum;
}
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	F(nums, n);
	cout << Candy(nums);
}