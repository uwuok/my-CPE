#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int len, cnt = 0;
    while (cin >> len && len) { // len = 0 時結束
        // input answer
        cout << "Game " << ++cnt << ":" << endl;
        int answer[len] = {0}, guess[len] = {0};
        for (int i = 0; i < len; ++i) {
            cin >> answer[i];
        }
        while (true) {
            for (int i = 0; i < len; ++i) {
                cin >> guess[i];
            }
            if (guess[0] == 0) break; // 有 0 就跳出
            
            int A = 0, B = 0;
            for (int i = 0; i < len; ++i) {
                if (guess[i] == answer[i]) { ++A; }
            }
            // 統計數字 1 ~ 9 分別在 answer 和 guess 出現的次數
            // int c1 = 0, c2 = 0;
            for (int i = 1; i <= 9; ++i) {
                int c1 = 0, c2 = 0; 
                for (int j = 0; j < len; ++j) {
                    if (i == answer[j]) ++c1; // answer = 1355 // c1 = 1 0 1 0 2 ...  
                    if (i == guess[j]) ++c2;  // guess =  1123 // c2 = 2 1 1 0 0 ...  // B = 2
                }
                // 由於有重複數字的可能，因此以較少者為主
                // c1 在正確的情況下應該是最少的，因此若 c2 比 c1 更少，即代表其所中的數字比答案更少(猜錯ㄌ)
                // 在計算 1 ~ 9 的 min(c1, c2)，
                if (c1 < c2) B += c1; else B += c2;    
            }
            
            // 所有出現在答案的數字(B) 減去 位置正確的數字(A) = 位置錯誤的數字
            cout << "(" << A << "," << B - A << ")" << endl;
        }
    }
    return 0;
}