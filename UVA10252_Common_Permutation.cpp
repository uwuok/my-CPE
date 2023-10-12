#include <bits/stdc++.h>
using namespace std;

/*
    1.輸入資料有空格，需使用 getline()
    2.輸入資料只有小寫
    3.輸出資料為按照字母順序排列，有幾個相同就輸出幾個。如 "aaab" 和 "abba" -> "aab"
*/

int main(void)
{
	int t1[26] = {0};
	int t2[26] = {0};
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		if (s1 == s2) { cout << s1 << endl; continue; }
		for (int i = 0; i < s1.size(); ++i) {
			++t1[s1[i] - 'a'];
		}
		for (int i = 0; i < s2.size(); ++i) {
			++t2[s2[i] - 'a'];
		}
		for (int i = 0; i < sizeof(t1) / sizeof(int); ++i) {
			if (t1[i] > 0 && t2[i] > 0) { 
				for (int j = 0; j < min(t1[i], t2[i]); ++j) {
					cout << (char)(i + 'a'); 
				}
			}
			t1[i] = 0;
			t2[i] = 0;
		}
		cout << endl;
	}
}