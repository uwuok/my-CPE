#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while (cin >> s) {
		if (s == "0") break;
		string b;
		/*
		for (int i = 0; i < s.size(); ++i) {
			b = b + to_string((s[i] - '0') % 2);
		}
		*/
		bitset<64> bit(s);
		b = bit.to_string();
		b = b.substr(b.find_first_of('1'));
		cout << b << " " << bit.count() << endl;
	}
}