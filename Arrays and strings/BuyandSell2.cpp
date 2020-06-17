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
int buyandesell(vector<int>&prices) {
	int n = prices.size();
	if (n == 0)
		return 0;
	int peak = prices[0];
	int valley = prices[0];
	int ans = 0;
	int i = 0;
	while (i < n - 1) {
		while (i < n - 1 and prices[i] >= prices[i + 1]) {
			i++;
		}
		valley = prices[i];
		while (i < n - 1 and prices[i] <= prices[i + 1]) {
			i++;
		}
		peak = prices[i];
		ans = ans + peak - valley;
	}
	return ans;
}
int main() {
	fastIO
	int n;
	cin >> n;
	vector<int>prices;
	prices.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> prices[i];
	}
	cout << buyandesell(prices);
}