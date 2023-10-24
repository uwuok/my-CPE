#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    while (cin >> n) {
        int a, b;
        for (int i = 0; i < n; ++i) {
            cin >> a >> b;
            // if (a == b) { cout << "Case " << i + 1 << ": " << a << endl; continue; }
            // else if (!(a & 1) && a + 1 == b) cout << "Case " << i + 1 << ": " << b << endl;
            if (a > b) { int temp = a; a = b; b = temp; }
            int start = (a & 1) ? a : a + 1;
            int total = 0;
            for (int j = start; j <= b; j += 2) {
                total += j;
            }
            cout << "Case " << i + 1 << ": " << total << endl;  
        }
    }
}