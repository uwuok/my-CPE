#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string s;
	while (cin >> t) {
		int n;
		for (int i = 0; i < t; ++i) {
			cin >> s >> s >> n;
            // 使用 one-dimantion array 在存取上更為方便快速。
			long long matrix[n * n] = {0};
			bool flag = true;
			for (int j = 0; j < n * n; ++j) {
				cin >> matrix[j];
			}
			int last = n * n - 1;
			for (int j = 0; j < n * n / 2; ++j) {
				if (matrix[j] != matrix[last - j]) { flag = false; break; }
				if (matrix[j] < 0 || matrix[last - j] < 0) { flag = false; break; }
			}
			cout << "Test #" << i + 1 << ": " 
				 << (flag ? "Symmetric." : "Non-symmetric.") << endl;
		}
	}
}