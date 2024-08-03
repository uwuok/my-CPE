#include <bits/stdc++.h>
using namespace std;

// 判斷一個數字是否為完全平方數

int main(void)
{
	int a, b, n;
	while (cin >> a >> b) {
		n = 0;
		if (a == 0 && b == 0) return 0;
		for (int i = a; i <= b; ++i) {
			int x = sqrt(i);            
			if (x * x == i) { ++n; }  // 開根號後的值相乘若與 i 相同則為完全平方數
		}
		cout << n << endl;
	}
}