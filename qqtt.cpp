#include <bits/stdc++.h>
using namespace std;

int main2() {
    const int len = 5;
    // char grid[len][len];
    vector<string> grid(5);
    for (int i = 0; i < len; ++i) {
        getline(cin, grid[i]);
        for (int j = 0; j < len; ++j) {

        }
    }
}


const int len = 5;
char puzzle[len][len];

void print_puzzle(char (&puzzle)[len][len])
{
    for (char (&m)[len] : puzzle) {
        for (char n : m) {
            cout << n << " ";
        }
        cout << endl;
    }
}

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
            switch (com[i]) {
                case 'A': {
                    if (m - 1 < 0) { err = true; break; }
                    puzzle[m][n] = puzzle[m - 1][n];
                    puzzle[m - 1][n] = ' ';
                    m = m - 1;
                } break;
                case 'L': {
                    if (n - 1 < 0) { err = true; break; }
                    puzzle[m][n] = puzzle[m][n - 1];
                    puzzle[m][n - 1] = ' ';
                    n = n - 1;
                } break; 
                case 'B': {
                    if (m + 1 >= len) { err = true; break; }
                    puzzle[m][n] = puzzle[m + 1][n];
                    puzzle[m + 1][n] = ' ';
                    ++m;
                } break;
                case 'R': {
                    if (n + 1 >= len) { err = true; break; }
                    puzzle[m][n] = puzzle[m][n + 1];
                    puzzle[m][n + 1] = ' ';
                    ++n;
                } break; 
                default: {
                    err = true;
                    break;
                }
            }
        }

        std::ofstream file("output.txt", std::ios::app);
        // 將 cout 的輸出重定向到文件
        std::streambuf *coutBuffer = std::cout.rdbuf();
        std::cout.rdbuf(file.rdbuf());
        
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
        cin.get(); // getline() 會讀入換行
    }
    return 0;
}