#include <bits/stdc++.h>
using namespace std;


// https://kai-y.medium.com/uva-10093-an-easy-problem-a40e8908c4be
// 1. 以 string 輸入整數，再用 isalnum() 判斷位元是否為 0–9, A-Z, a-z
// 2. base 必大於各個位數（例如，1A 的 base必大於 11）
// 3. 將各個位數加總(abc -> a+b+c)，找出最小的 base
// 例如 135 => 1 + 3 + 5 (其 base 至少為 5 + 1) 
// 			=> 9 (在 base = 10 的情況下，(base - 1) % 9 為 0，則 N = 10)

int main(void)
{
	string str;
	while (getline(cin, str)) {
		int sum = 0;
		int temp;
		int base = 1;
		for (int i = 0; i < str.size(); ++i) {
			char c = str[i];
			if (c >= '0' && c <= '9') {
				temp = c - '0';
			} else if (c >= 'A' && c <= 'Z') {
				temp = (int)(c - 'A' + 10);
			} else if (c >= 'a' && c <= 'z') {
				temp = (int)(c - 'a' + 36);
			} else continue;
			// 找出最小所需的 base 
			if (base < temp) { base = temp; }
			sum += temp;
		}
		
		for (int i = base; i <= 62; ++i) {
			if (sum % i == 0) {
				cout << i + 1 << endl;
				break;
			}
			if (i == 62) cout << "such number is impossible!" << endl;
		}
		
	}
	// A = 10, Z = 35
	// a = 36, z = 62
	// q r s t u v w x y z
	
}