#include<iostream>
#include<cmath>
using namespace std;
bool canPlace(int mat[][9], int i, int j, int n, int number) {
	//row value and column value 
	for (int x = 0; x < n; x++) {
		if (mat[x][j] == number || mat[i][x] == number) {
			return false;
		}
	}
	// submatrix 
	int rn = sqrt(n);
	int sx = (i / rn) * rn;
	int sy = (j / rn) * rn;
	for (int x = sx; x < sx + rn; x++) {
		for (int y = sy; y < sy + rn; y++) {
			if (mat[x][y] == number) {
				return false;
			}
		}
	}
	return true;
}
bool suduko(int mat[][9], int i, int j, int n) {
	if (i == n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	if (j == n) {
		return suduko(mat, i + 1, 0, n);
	}
	if (mat[i][j] != 0)
		return suduko(mat, i, j + 1, n);
	//rec case
	for (int number = 1; number <= n; number++) {
		if (canPlace(mat, i, j, n, number)) {
			mat[i][j] = number;
			bool couldweSolve = suduko(mat, i, j + 1, n);
			if (couldweSolve == true)
				return true;
		}
	}
	//Reset the board
	mat[i][j] = 0;
	return false;
}
int main() {
	int n;
	cin >> n;
	int mat[9][9];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
	suduko(mat, 0, 0, n);
}