#include <iostream>
#include <vector> 
#include <string>
#include <sstream>
#include <cmath>
using namespace std; 

// 2      = x
// 1 1 1  = x^2 + x + 1
// f'(x)  = 2 * x + 1 =   2 * 2 + 1 = 5

// 7 = x
// 1 1 = x - 1
// f'(x) = 1 

int main(void)
{    
    string line;
    int n, num;
    
    while (cin >> n) {
        vector<int> vec;
        cin.ignore();
        getline(cin, line);
        stringstream ss(line);
        while (ss >> num) { vec.push_back(num); }
        
        long long result = 0;
        for (int i = vec.size() - 2, j = 1; i >= 0; --i, ++j) {
            // (n - 1) * pow(vec[i], n - 1)
            // x^5 => 5 * x ^ 4
            // 1 * pow(1, -1) 
            // result += (vec.size() - i) * pow(vec[i], vec.size() - i - 1); 
            // 1 * 2
            result += j * vec[i] * pow(n, j - 1);
        }
        cout << result << endl;
    }
}