#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	string str = "";
	
	while (cin >> str) {
		if (str == "0") return 0;
		int odd = 0, even = 0;
		for (int i = 1; i <= str.size(); ++i) {
			if (i & 1) { odd += str[i - 1] - '0'; }
			else { even += str[i - 1] - '0'; }
		}
		if (!(abs(odd - even) % 11)) cout << str << " is a multiple of 11." << endl;
		else cout << str << " is not a multiple of 11." << endl;
	}
}