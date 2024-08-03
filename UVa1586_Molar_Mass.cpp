#include <bits/stdc++.h>
using namespace std;

// 先找到 letter 的位置，再以該位置往下看是否有數字

int main(void)
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        float mul = 1.0f, tot = 0.0f;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] < 'A' || s[i] > 'Z') {
                mul = 0.0f;
                int combo = 0;
                for (int j = i; j >= 0; --j) {
                    // is not number
                    if (s[j] < '0' || s[j] > '9') {
                        i = j + 1; // 校正 (若當前不是數字即表示 j 多訪問了一次)
                        break;
                    } else {
                        mul += (float) (s[j] - '0') * pow(10, combo++);
                    }
                }
            } else {
                switch (s[i]) {
                    case 'C':
                        tot += 12.01 * mul; break;
                    case 'H':
                        tot += 1.008 * mul; break;
                    case 'O':
                        tot += 16.00 * mul; break;
                    case 'N':
                        tot += 14.01 * mul; break;
                }
                mul = 1.0f;
            }
        }
        // cout << tot << endl;
        printf("%.3f\n", tot);
    }
}