#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	map<string, int> country;
	while (cin >> n) {
		string s;
		for (int i = 0; i < n; ++i) {
			cin >> s;
			country[s]++;
			getline(cin, s);
		}
		/*
		for (map<string, int>::const_iterator iter = country.cbegin(); iter != country.cend(); ++iter) {
			cout << iter->first << " " << iter->second << endl;
		}
		*/
		for (auto& iter : country) {
			cout << iter.first << " " << iter.second << endl;
		}
	}
}
