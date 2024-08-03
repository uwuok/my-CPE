#include <bits/stdc++.h>
using namespace std;

const int len = 5;
char puzzle[len][len];


void initia(char (&puzzle)[len][len])
{
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            puzzle[i][j] = ' ';
        }
    }
}

int main() {
    
    int tot = 0;
    while (true) {
        string s;
        int m, n;
        initia(puzzle);
        for (int i = 0; i < len; ++i) {
            getline(cin, s);
            for (int j = 0; j < s.size(); ++j) {
                if (s[j] == 'Z') return 0;
                puzzle[i][j] = s[j];
            }
        }

        // print_puzzle(puzzle);

        // find the only space. 
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (puzzle[i][j] == ' ') { m = i; n = j; break; }
            }
        }

        // cout << "m = " << m << ", n = " << n << endl;

        // read command
        string com;
        while (true) {
            char x = cin.get();
            if (x == '\n') continue;
            if (x == '0') break;
            com += x;
        }

        bool err = false;
        for (int i = 0; i < com.size(); ++i) {
            int m_ = m, n_ = n;
            switch (com[i]) {
                case 'A': {
                    m_ = m_ - 1;
                } break;
                case 'L': {
                    n_ = n_ - 1;
                } break; 
                case 'B': {
                    m_ = m_ + 1;
                } break;
                case 'R': {
                    n_ = n_ + 1;
                } break; 
                default: {
                    err = true;
                    break;
                }
            }
            if (n_ < 0 || n_ >= len || m_ < 0 || m_ >= len) { 
                err = true; 
                break; 
            } else { 
                puzzle[m][n] = puzzle[m_][n_]; 
                puzzle[m_][n_] = ' ';
                m = m_;
                n = n_;
            }
        }
        
        // 不是第一行時換行 (不加在後面的原因是，我們不知道輸出總共有多少條)
        if (tot) cout << endl;
        cout << "Puzzle #" << ++tot << ":" << endl;
        if (err) {
            cout << "This puzzle has no final configuration." << endl;
        } else {
            for (int i = 0; i < len; ++i) {
                for (int j = 0; j < len; ++j) {
                    cout << puzzle[i][j] << (j < len - 1 ? " " : "");
                }
                cout << endl;
            }
        }
        cin.get(); // cin.get() 會讀取到先前被 cin.get() 忽略掉的 '\n'
    }
    return 0;
}