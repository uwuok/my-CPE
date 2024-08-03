#include <bits/stdc++.h>
using namespace std; 

// across -> 
// down V

int main()
{
    int kaze = 0;
    while (true) {
        int m, n;
        cin >> m >> n;
        if (m == 0) break;
        char puzzle[m][n]; 
        int mark[m][n] = {-1};
        int tot = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                char c;
                cin >> c;
                puzzle[i][j] = c;
                if (c != '*') {
                    if (i - 1 < 0 || j - 1 < 0 || 
                        puzzle[i - 1][j] == '*' || 
                        puzzle[i][j - 1] == '*') {
                            mark[i][j] = ++tot;
                        }
                }
            }
        }

        if (kaze > 0) cout << endl;
        cout << "puzzle #" << ++kaze << ":" << endl;
        // 如果遇到換行 + * 的情況或 * + \n 的情況會連續兩次換行。
        // across 
        cout << "Across";
        bool f = true;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j == 0) { f = true; } // 換行表示一定要換行 (所以無 continue)
                if (puzzle[i][j] == '*') { f = true; continue; } // 有星號則等遇到下個字母再換行
                // if (f) { cout << endl << "  " << mark[i][j] << "."; f = false; }
                if (f) { printf("\n %2d.", mark[i][j]); f = false; }
                cout << puzzle[i][j];
            }
            // cout << endl;
        }
        cout << endl;

        // Down

        cout << "Down" << endl;
        f = true;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (puzzle[i][j] != '*') {
                    // cout << mark[i][j] << ".";
                    printf(" %2d.", mark[i][j]);
                    for (int k = i; k < m; ++k) {
                        if (puzzle[k][j] == '*') { break; }
                        cout << puzzle[k][j];
                        puzzle[k][j] = '*';
                    }
                    cout << endl;
                }
            }
        }
        // for (int i = 0; i < m; ++i) {
        //     for (int j = 0; j < n; ++j) {
        //         cout << puzzle[i][j];
        //         // cout << mark[i][j] << "  ";
        //     }
        //     cout << endl;
        // }
    }
}