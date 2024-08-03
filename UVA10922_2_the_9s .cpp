#include <bits/stdc++.h>
using namespace std;

int d = 0;

int func(long long n)
{
	// n = 117
	int result = 0;
	while (n > 0) { // n = 117, 11, 1
		result += n % 10; // 7 + 1 + 1
		n /= 10;
	}
	return result;
}

int main(void)
{
	string s;
	while (cin >> s) {
		if (s[0] == '0') break;
		int tot = 0;
		for (int i = 0; i < s.size(); ++i) { // 117
			tot += s[i] - '0';
		}
		d = 0;	
		int x = func(tot);
		// cout << "x = " << x;
		// cout << " tot = " << tot << endl;
		while (tot > 9) {
			++d;
			tot = func(tot); // 用於計算個別數字相加
		}
		if (tot == 9) ++d;   // 補上最後一個為 9 的情況
		bool flag = false;
		if (tot % 9) {
			for (int i = 0; i < s.size(); ++i) {
				cout << s[i];
			}
			cout << " is not a multiple of 9." << endl;
		} else {
			for (int i = 0; i < s.size(); ++i) {
				cout << s[i];
			}
			cout << " is a multiple of 9 and has 9-degree " << d << "." << endl;
		}
	}
}