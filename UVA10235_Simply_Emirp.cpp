#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	while (cin >> n) {
		int a = n, b = 0; // a is ori, b is reverse
		int x = 0;
		// 123
		// 321
		// 
		while (n > 0) {
			b = b * 10 + (n % 10);
			n /= 10;
		}
		// cout << "a = " << a << " b = " << b << endl;
		// prime
		bool p = true, q = true;
		for (int i = 2; i <= sqrt(a); ++i) {
			if (a % i == 0) { p = false; break; }
		}
		if (a == b) { q = false; }// 排除個位數的情況。
		for (int i = 2; i <= sqrt(b); ++i) {
			if (b % i == 0) { q = false; break; }
		}
		cout << a << " is ";
		if (p && q) {
			cout << "emirp." << endl;
		} else if (p) {
			cout << "prime." << endl;
		} else {
			cout << "not prime." << endl;
		}
	}
}