#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	while (cin >> n) {
		int nums[n] = {0};
		int table[n - 1] = {0};
		// nums[0] = n; // 無需包含 n 
		for (int i = 0; i < n; ++i) {
			cin >> nums[i];
		}
		bool jolly = true;
		if (n > 1) {
			int length = sizeof(nums)/sizeof(int); 
			for (int i = 0; i < length - 1; ++i) { // exclude the last number.
				int x = abs(nums[i] - nums[i + 1]);
				table[i] = x;
			}
			sort(table, table + n);
			for (int i = 0; i < n - 1; ++i) {
				// 1. 相鄰相差數需為 1 ~ n - 1
				// 2. 若有重複值，也不算 jolly
				// 因此，其值必為連續 1 ~ n - 1，其中無重複。
				if (table[i] != i + 1) { jolly = false; break; }
			}
		}
		cout << ((jolly) ? "Jolly" : "Not jolly") << endl;
	}
}