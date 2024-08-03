#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string input;
    
    while (getline(cin, input)) {
        // istringstream is(input);
        istringstream iss(input);
        vector<int> vec;
        int number;
        bool flag = false; // 捨去前面無意義的 0
        while (iss >> number) {
            if (number != 0) { flag = true; }
            if (flag) { vec.push_back(number); }
        }
        int n = vec.size();
        if (vec.size() == 0) cout << 0;
        for (int i = 0; i < vec.size(); ++i) {
            // cout << "n = " << n << endl;
            --n;
            // 處理符號問題：
            // 如果有負號：
            // 1. 數字位於第一位，則其負號無空格
            // 2. 數字不位於第一位，則其負號有空格
            // 無負號的除了數字位於第一位的之外，其餘直接加正號
            if (vec[i] == 0) { continue; }
            if (i == 0) {
                if (vec[i] < 0) { cout << '-'; }
            } else {
                if (vec[i] < 0) { cout << " - "; }
                if (vec[i] > 0) { cout << " + "; }
            }

            int num = abs(vec[i]);
            // 係數是 1 的時候省略係數
            // 次方是 1 的時候省略次方
            if (num != 1 && n != 0) {
                cout << num;
            } if (n != 0) {
                if (n == 1) {
                    cout << "x";
                } else {
                    cout << "x^" << n;
                }
            } else if (n == 0) {
                cout << num;
            }
        }
        cout << endl;
    }
    return 0;
}