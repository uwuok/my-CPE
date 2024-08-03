#include <bits/stdc++.h>
using namespace std;

// p 為當前起始位置, q 為當前最佳的起始位置

/*
CGAGTCAGCT
TCGAGTCAGC
010001000
*/
bool less_(string s, int p, int q)
{
    int len = s.size();
    for (int i = 0; i < len; ++i) {
        if (s[(p + i) % len] == s[(q + i) % len]) continue;
        if (s[(p + i) % len] < s[(q + i) % len]) return true;
        else return false;
        // if (s[(p + i) % len] != s[(q + i) % len]) {
        //     cout << (s[(p + i) % len] < s[(q + i) % len]) << endl; 
        //     return s[(p + i) % len] < s[(q + i) % len];
        // }
    }
    return false;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        int ans = 0, len = s.size();
        
        for (int i = 1; i < len; ++i) {
            // 找出最小的起始位置，逐個判斷元素
            if (less_(s, i, ans)) ans = i;
        }
        for (int i = 0; i < len; ++i) {
            cout << s[(ans + i) % len];
        }
        cout << endl;
    }
}