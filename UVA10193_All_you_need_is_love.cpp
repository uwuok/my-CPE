#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a%b); // a = 10, b = 5 -> gcd(5, 0) -> return 5
}

int main(void)
{
	int n, tot = 0; 
	cin >> n;
	while (n--) {
		string s1, s2;
		// 27, 24 -> A
		// 27, 31 -> B
		cin >> s1 >> s2;
		int a = 0, b = 0;
		for (int i = 0; i < s1.size(); ++i) {
			a += (s1[s1.size() - i - 1] - '0') * pow(2, i);
		}
		for (int i = 0; i < s2.size(); ++i) {
			b += (s2[s2.size() - 1 - i] - '0') * pow(2, i);
		}
		// cout << "a = " << a << " b = " << b << endl;
		int x = gcd(a, b);
		cout << "Pair #" << ++tot << ": ";
		cout << (x != 1 ? "All you need is love!" : "Love is not all you need!") << endl;
	}
}