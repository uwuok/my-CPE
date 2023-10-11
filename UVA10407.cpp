#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long a, b;
	while (cin >> a >> b) {
		cout << [](long long a, long long b){ return (a > b) ? a - b : b - a; }(a, b) << endl;
	}
}