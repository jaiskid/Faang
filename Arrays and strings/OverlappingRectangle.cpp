#include<iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, a1, b1, a2, b2;
	cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
	int case1 = x2 <= a1;
	int case2 = y1 >= b2;
	int case3 = x1 >= a2;
	int case4 = b1 >= y2;
	if (case1 || case2 || case3 || case4)
		cout << 0;
	else
		cout << 1;
}