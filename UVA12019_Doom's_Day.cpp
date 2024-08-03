#include <bits/stdc++.h>
using namespace std;
// 2011 1 1 -> 6

enum Days {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
};

int main(void)
{
	Days first = Saturday;
	int n, m, d;
	int total;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			cin >> m >> d;
			total = 0;
			for (int j = 1; j < m; ++j) {
				switch (j) {
					case 1:
					case 3:
					case 5: 
					case 7:
					case 8: 
					case 10:
					case 12: total += 31; break;
					
					case 2:  total += 28; break;
					
					case 4: 
					case 6: 
					case 9:
					case 11: total += 30; break;
				}
			}
			// 總天數需扣除第一天(因取 mod 運算會與總天數相差一天)
            // 或是將 first 改為 Friday
			total = total + d + first - 1; // 6 + 6 = 12 % 7 = 5
			
			switch (total % 7) {
				case Sunday: cout << "Sunday" << endl; break;
				case Monday: cout << "Monday" << endl; break;
				case Tuesday: cout << "Tuesday" << endl; break;
				case Wednesday: cout << "Wednesday" << endl; break;
				case Thursday: cout << "Thursday" << endl; break;
				case Friday: cout << "Friday" << endl; break;
				case Saturday: cout << "Saturday" << endl; break;
			}
			
			// cout << "total = " << total + d << endl;
		}
	}
}
