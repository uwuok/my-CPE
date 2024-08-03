#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, sum = 0, caps = 0; 
	/*
	while (cin >> n) {
		caps = n;
		sum = n;
		while (caps >= 3) { sum += 1; caps -= 3; caps++; }
		// (只要剩餘兩個瓶子，就可以再借一個瓶子去換一個新可樂)
		// 新可樂則又是一個瓶子，則可以將借的瓶子還回去
		if (caps >= 2) { sum += 1; } // borrow.  
		
		cout << sum << endl;
	}*/
	
	// 每三瓶能換一瓶，等於每次換需要兩瓶(可以借)，再加上原本的瓶數即為答案
	while (cin >> n) {
		cout << n + n / 2 << endl;
	}
}