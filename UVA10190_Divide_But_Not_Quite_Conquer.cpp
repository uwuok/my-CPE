
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m;
	int arr[1001] = {0};
	while (cin >> n >> m) {
		bool f = (m == 1); // m 不可為 1
		int i = 0;
		// n = 125, 25, 5, 1
		while (n != 1 && !f){
			if (n % m) { f = true; break; } // 每次計算 n % m 是否能整除 
			arr[i++] = n;
			n /= m;
		}
		if (f) { cout << "Boring!"; }
		else {
			for (int j = 0; j < i; ++j) {
				cout << arr[j] << " ";
			}
			cout << 1;
		}
		cout << endl;
	}
}
