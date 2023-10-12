
#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
	if (n < 10) return n;
	else return func(func(n / 10) + n % 10);
}

int main(void) 
{
	int n;
	while (cin >> n) {
		if (n == 0) return 0;
		cout << func(n) << endl;
	}
}
