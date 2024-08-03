#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		vector<int> vec;
		// vector<bool> ls(x + 1);
		vec.push_back(1); // vec[0] = 1
		vec.push_back(1); // vec[1] = 1
		// vec.push_back(1);
		// vec[0] = 1;
		// vec[1] = 1;
		// vec[2] = 2;
		// create fib table
		for (int i = 2; i <= x; ++i) {
			int t = vec[i - 1] + vec[i - 2];
			if (t > x) break;
			// vec[i] = t;
			vec.push_back(t);
		}
		// find the combination num
		cout << x << " = ";
		bool f = false;
		for (int i = vec.size() - 1; i >= 1; --i) {
			// if (x == 0) break;
			// cout << "x = " << x << ", i = " << i << endl;
			if (x >= vec[i]) { x -= vec[i]; cout << 1; f = true; }
			else if (f) { cout << 0; }
		}
		cout << " (fib)" << endl;
		// for (int i = 0; i < 
	}
}