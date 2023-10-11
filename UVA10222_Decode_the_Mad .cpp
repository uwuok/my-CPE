#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s1 = "1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";	
	string input;
	while (getline(cin, input)) {
		for (int i = 0; i < input.size(); ++i) {
			if (input[i] == ' ') { cout << " "; continue; }
			for (int j = 0; j < s1.size(); ++j) {
				if (tolower(input[i]) == s1[j]) { cout << s1[j - 2]; }
			}
		}
		cout << endl;
	}
}