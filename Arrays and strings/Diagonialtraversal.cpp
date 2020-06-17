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
vector<int> findDiagonalOrder(vector<vector<int>>matrix) {
	if (matrix == NULL || matrix.empty()) {
		return {};
	}
	int n = matrix.size();
	int m = matrix[0].size();
	int row = 0;
	int col = 0;
	int dir = 1;
	vector<int> res(n * m);
	for (int i = 0; i < res.size(); i++) {
		res[i] = matrix[row][col];
		if (dir == 1) {
			if (col == m - 1) {
				row++;
				dir = -1;
			}
			else if (row == 0) {
				col++;
				dir = -1;
			}
			else {
				row--;
				col++;
			}
		}
		else {
			if (row == n - 1) {
				col++;
				dir = 1;
			}
			else if (col == 0) {
				row++;
				dir = 1;
			}
			else {
				row++;
				col--;
			}
		}
	}
	return res;
}
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matrix(n, vector<int>(m, 0));
	NF(matrix, n, m);

}