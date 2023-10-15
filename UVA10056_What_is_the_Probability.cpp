#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int s;
	while (cin >> s) {
		int n, I;  // n = number of people, I = winner player. (I <= n)
		float p;   // p = probability
		for (int i = 0; i < s; ++i) {
			cin >> n >> p >> I;
			float result = 0.0000;
			if (p > 0) {
				// Infinite Geometric Series and Formula
				// refer: https://reurl.cc/Oj5AL9
				result = pow((1 - p), I - 1) * p / (1 - pow(1 - p, n));
			}
			cout << fixed << setprecision(4) << result << endl;
		}
	}
}