
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && a == b) return 0;
		int sum = 0, carry = 0;
		bool is_carry = false;
		while (a > 0 || b > 0) {
			if (is_carry) {
				sum += 1;
				is_carry = false;
			}
			sum += a % 10 + b % 10;
			if (sum >= 10) { is_carry = true; ++carry; }
			sum = 0;
			a /= 10;
			b /= 10;
		}
		if (carry == 0) { cout << "No carry operation." << endl; }
		else { cout << carry << (carry == 1 ? " carry operation." 
											: " carry operations.") << endl; }
	}
}
