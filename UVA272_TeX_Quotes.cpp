
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	int n = 0;
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '"') {
				if (!(n & 1)) { cout << "``"; }
				else { cout << "''"; }
				++n;
			} else { cout << s[i]; }
		}
		cout << endl;
	}
}
