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
int CompareVersion(string version1, string version2) {
	int n1 = version1.size(), n2 = version2.size();
	int i = 0, j = 0;
	while (i < n1 || j < n2) {
		int num1 = 0, num2 = 0;
		while (i < n1 and version1[i] != '.') {
			int num = version1[i] - '0';
			num1 = num1 * 10 + num;
			i++;
		}
		while (j < n2 and version2[j] != '.') {
			int num = version2[j] - '0';
			num2 = num2 * 10 + num;
			j++;
		}
		if (num1 > num2)
			return 1;
		else if (num1 < num2)
			return -1;
		else
		{
			i++;
			j++;

		}
	}
	return 0;
}
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string version1;
	string version2;
	cin >> version1 >> version2;
	cout << CompareVersion(string version1, string version2);