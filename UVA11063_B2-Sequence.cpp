// UVA11063_B2-Sequence.cpp
#include <bits/stdc++.h>
using namespace std;

bool func(int n)
{
	int arr[n] = {-1};
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
		
	int temp = arr[0];
	for (int i = 1; i < n; ++i) {
		if (temp >= arr[i]) return false;
		temp += arr[i];
	}
	return true;
}

int main(void)
{
	int n, case_ = 0;
	while (cin >> n) {
		++case_;
		cout << "Case #" << case_ << ": ";
		if (func(n)) cout << "It is a B2-Sequence.";
		else cout << "It is not a B2-Sequence.";
		cout << endl << endl;
	}
}