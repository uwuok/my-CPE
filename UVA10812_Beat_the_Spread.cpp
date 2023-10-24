#include <iostream>
using namespace std;

/*
void func(int a, int b)
{
	for (int j = 0; j <= a; ++j) {
		for (int k = 0; k <= a; ++k) {
			if ((j + k == a) && (j - k == b)) {
				cout << j << " " << k;
				return;
			}
		}
	}
}
*/

int main(void)
{
	// input:
	// 40 20 (scores sum, scores difference)
	// output:
	// 30 10 (A possible scores, B possible socres)
	// (30 + 10 = 40), (30 - 10 = 20)
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		// sum 必須大於 difference
		// a + b 必須為偶數
		if (a < b || (a + b) & 1) { cout << "impossible" << endl; continue; }
		else {
			// func(a, b);
			// 二元一次方程式
			// a + b = 40
			// a - b = 20
			// 2a = (40 + 20) = 60, a = 30
			// 2b = (40 - 20) = 20, b = 10
			cout << (a + b) / 2 << " " << (a - b) / 2 << endl;
		}
	}
}