#include <bits/stdc++.h> 
using namespace std;

#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100

long long func(long long n)
{
	if (n >= kuti) {
		func(n / kuti);
		cout << " kuti";
		n %= kuti;
	} 
	if (n >= lakh) {
		func(n / lakh);
		cout << " lakh";
		n %= lakh;
	}
	if (n >= hajar) {
		func(n / hajar);
		cout << " hajar";
		n %= hajar;
	}
	if (n >= shata) {
		func(n / shata);
		cout << " shata";
		n %= shata;
	} 
	if (n != 0) {
		cout << " " << n;
	}
}

int main(int argc, char *argv[])
{
	long long n;
	size_t counter = 0;
	while (cin >> n) {
		cout << setw(4) << ++counter << ".";
		if (n == 0) { cout << " 0"; }
		else func(n);
		cout << endl;
	}
}