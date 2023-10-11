#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, maximum = 0;
	int table[26] = {0};
	while (cin >> n) {
		cin.ignore(1, '\n');
		string str;
		for (int i = 0; i < n; ++i) {
			getline(cin, str);
			for (int j = 0; j < str.size(); ++j) {
				char c = str[j];
				if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
					c = toupper(c);
					++table[c - 'A'];
					maximum = max(maximum, table[c - 'A']);
				}
			}
			
		}
		for (int i = maximum; i > 0; --i) {
			for (int j = 0; j < sizeof(table) / sizeof(int); ++j) {
				if (table[j] == i) { cout << (char)(j + 'A') << " " << table[j] << endl; }
			}
		}
	}
}