#include <iostream>
using namespace std;

int main(void)
{
    // 1 6
    // 1: 1
    // 2: 2 3
    // 3: 4 5 6
    // 4: 7 8 9 10

    // 用減的方式，將天數一天一天減直至 <= 0 
    long long s, d;
    while (cin >> s >> d) {
        while (d > 0) {
            d -= (s++);
        }
        cout << s - 1 << endl;
    }
}