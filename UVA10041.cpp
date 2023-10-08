#include <bits/stdc++.h> 
using namespace std;


int median(int arr[], int arrSize) {
	
	sort(arr, arr + arrSize);
	
	if (arrSize & 0x1) {	// odd
		return arr[arrSize / 2];
	} else {
		return (arr[arrSize / 2 - 1] + arr[arrSize / 2]) / 2;
	}
}

int main(void) 
{
	int n, k;
	cin >> n; 
	while (n--) {
		cin >> k;
		int arr[k];
		for (int i = 0; i < k; ++i) {
			cin >> arr[i];
		}
		int mid = median(arr, sizeof(arr) / sizeof(arr[0]));
		int sum = 0;
		for (int i = 0; i < k; ++i) {
			sum += abs(arr[i] - mid);
		}
		cout << sum << endl;
	}
}