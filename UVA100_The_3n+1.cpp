
#include <bits/stdc++.h>
using namespace std;

int func(int);
static int cnt = 0;

int main(int argc, char *argv[]) 
{
	int a, b;
	while (cin >> a >> b) {
		cout << a << " " << b << " ";
		if (a > b) { int temp = a; a = b; b = temp; }
		int best = 0;
		for (int i = a; i <= b; ++i) {
			cnt = 0;
			func(i);
			best = max(cnt, best);
		}
		cout << best << endl;
	}
}

int func(int n)
{
	++cnt;
	if (n == 1) return n;
	if (n & 0x1) return func(3 * n + 1);
	else return func(n / 2);
}
