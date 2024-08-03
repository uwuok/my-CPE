#include <iostream>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

int n, m;

bool cmp1(int x, int y){
    if ((x % m) != (y % m)){
        return (x % m) < (y % m);
    } else {
        if ((x % 2) * (y % 2)){
            //若兩奇數除以M餘數大小相等，則原本數值較大的奇數排在前面
            return x > y;
        } else if ((x % 2 == 0) && (y % 2 == 0)){
            //若兩偶數除以M餘數大小相等，則較小的偶數排在前面
            return x < y;
        } else {
            //兩數為一奇一偶且兩數除以M 的餘數相等，則奇數要排在偶數前面
            return (x % 2);
        }
    }
}

bool cmp(int a, int b)
{
	// module m is not same: module low -> module high
	// module m is same: 
	// one odd, one even: odd -> even
	// both are odd: high -> low
	// both are even: low -> high
	// a = abs(a), b = abs(b);
	
	// a = 7, b = -7
	// a % 7 == b % 7 == 0
	if ((a % m) != (b % m)) return a % m < b % m;
	// a % m == b % m
	// -1 and 1 is odd
	if (abs(a % 2) != abs(b % 2)) return (a % 2);   // odd and even
	if ((a % 2) && (b % 2)) return a > b;   // odd
	return a < b;
}

int main(void)
{
	while (cin >> n >> m) {
		cout << n << " " << m << endl;
		if (n == 0 && m == 0) return 0;
		vector<int> vec(n);
		for (int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end(), cmp);
		for (int i = 0; i < vec.size(); ++i) {
			cout << vec[i] << endl;
		}
	}
}


/*
int main(void)
{
	int m = 7;
	for (int i = -10; i <= 10; ++i) {
		for (int j = -10; j <= 10; ++j) {
			if (i % m == j % m && i % 2 != j % 2) {
				cout << "i = " << i << ", j = " << j << endl;
				cout << i << " % " << m << " = " << i % m << endl;
				cout << j << " % " << m << " = " << j % m << endl;
				cout << i << " % " << 2 << " = " << i % 2 << endl;
				cout << j << " % " << 2 << " = " << j % 2 << endl;
			}
		}
	}
}
*/