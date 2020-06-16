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
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int count1 = 0, count2 = 0, element1 = INT_MAX, element2 = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (nums[i] == element1) {
			count1++;
		}
		else if (nums[i] == element2) {
			count2++;
		}
		else if (count1 == 0) {
			count1++;
			element1 = nums[i];
		}
		else if (count2 == 0) {
			count2++;
			element2 = nums[i];
		}
		else {
			count1--;
			count2--;
		}
	}
	count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == element1) {
			count1++;
		}
		else if (nums[i] == element2) {
			count2++;
		}
	}
	if (count1 > n / 3) {
		cout << element1 << " ";
	}
	if (count2 > n / 3) {
		cout << element2 << " ";
	}
	if (count1 <= (n / 3) and count2 <= (n / 3))
		cout << "No Majority Elements";
}